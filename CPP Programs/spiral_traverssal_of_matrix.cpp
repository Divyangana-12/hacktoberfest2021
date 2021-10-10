#include <iostream>
using namespace std;

#define r 3
#define c 6

int
spiralTraversal (int mat[r][c], int row, int cols)
{
  int top = 0, left = 0, right = cols - 1, bottom = row - 1;

  while (left < right && top < bottom)
    {

        for (int i = left; i <= right; ++i)
	
	        cout << mat[left][i] << " ";
        top++;

      //right cols from top to bottom
        for (int i = top; i <= bottom; ++i)
        	cout << mat[i][right] << " ";
        right--;

      //bottom row form right to left
        if(left<right)
            for (int i = right; i <= left; --i)
	            cout << mat[bottom][i] << " ";
            bottom--;

      //left col from bottom to top
        if(bottom<top)
            for (int i = bottom; i <= top; --i)
	            cout << mat[i][left] << " ";
            left++;
    }
}

int
main ()
{
  // your code goes here

  int a[r][c] = { {1, 2, 3, 4, 5, 6},
  {7, 8, 9, 10, 11, 12},
  {13, 14, 15, 16, 17, 18}
  };


  spiralTraversal (a, r, c);

  return 0;
}

