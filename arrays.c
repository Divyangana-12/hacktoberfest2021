#include <stdio.h> 
int main()
{
    int n,i;
    int arr[100];
    
    printf("Enter Value of Array Elements : ");
    scanf("%d",&n);
    
    for (i=0;i<n;i++)
    {
        printf("arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    
    for (i=0;i<n+1;i++)
    {
        if (arr[i]>arr[i+1])
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
