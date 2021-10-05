#include <stdio.h>
void rev(int arr[], int start, int end)
{
   int temp;
   while (start < end)
   {
      temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
      start++;
      end--;
   }
}
int main()
{
   int arr[] = { 1, 2, 3, 4, 5, };
   int n = 5;
   int d = 2;
   int i;
   printf("The initial array is :\n");
   for ( i = 0; i < n; i++)
      printf("%d ", arr[i]);
   rev(arr, 0, d - 1);
   rev(arr, d, n - 1);
   rev(arr, 0, n - 1);
   printf("\nThe left reversed array by %d elements is:\n",d);
   for ( i = 0; i < n; i++)
      printf("%d ", arr[i]);
   return 0;
}
//output
The initial array is :
1 2 3 4 5
The left reversed array by 2 elements is:
3 4 5 1 2
