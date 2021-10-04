#include <stdio.h>
#include <stdlib.h>

int main()
{   
    
    int arr1[n];
    int n, i;

    printf("Input the size of array : ");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    
    for (i=n-1;i>=0 ;i--)
    {
        printf("%d", arr1[i]);
    }
    return 0;
    }


