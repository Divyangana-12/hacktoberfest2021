#include <stdio.h>
int main()
{
    int n,i;

    printf("Enter size of the Array : ");
    scanf("%d",&n);

    int arr[n];

    for (i=0;i<n;i++){
        printf("Enter value for element %d :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for (i=0;i<n-1;i++){
        if (arr[i]>arr[i+1]){
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}

