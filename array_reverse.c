#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("Input the size of array : ");
    scanf("%d", &n);

    int f=n-1;

    int arr1[n];  // Declare two arrays according to the size we want
    int arr2[n];

    printf("Input %d elements in the array :\n", n);

    for (i = 0; i < n; i++)  //Get values from User
    {
        printf("Element no %d:", i+1);
        scanf("%d", &arr1[i]);
    }

    for (i=0;i <n ;i++) 
    {
        arr2[i]=arr1[f--];
    }

    printf("\nReverse Order of Array :\n\t");
    for (i=0;i<n;i++)  //print the reversed elements of array
    { 
        printf("%d ",arr2[i]);
    }
}

