#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[100];
    int arr2[100];
    int n, i;

    printf("Input the size of array : ");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("Element no %d:", i);
        scanf("%d", &arr1[i]);
    }
    int f=n-1;
    for (i=0;i <n ;i++)
    {
        arr2[i]=arr1[f--];
    }
    for (i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
}

