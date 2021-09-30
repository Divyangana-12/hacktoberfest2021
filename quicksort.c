#include<stdio.h>
#include<stdlib.h>

void input(int *a,int n){
    for(int i=0;i<n;i++){
        printf("element %d ",i);
        scanf("%d",&a[i]);
    }
}

void display(int *a,int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int partition(int *a,int low,int high){
    int c;
    int pivot=a[low];
    int i=low+1;
    int j=high;
    do{
        while(pivot>=a[i]){
            i++;
        }
        while(pivot<a[j]){
            j--;
        }
        if(i<j){
            c=a[i];
            a[i]=a[j];
            a[j]=c;
        }
    }while(i<j);
    c=a[low];
    a[low]=a[j];
    a[j]=c;
    return j;
}

void quickSort(int *a,int low,int high){
    int partitionIndex;
    if(low<high){
        partitionIndex=partition(a,low,high);
        quickSort(a,low,partitionIndex-1);
        quickSort(a,partitionIndex+1,high);
    }
}

int main(){
    int *a,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));

    input(a,n);
    display(a,n);
    quickSort(a,0,n-1);
    display(a,n);
}
