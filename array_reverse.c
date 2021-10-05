#include<stdio.h>

int main()
{
	// DECKLARING VARIABLE------
	int i,size,a[100];
	
	// SCANNING THE SIZE FOR ARRAY
	printf( "Enter the NO : " );
	scanf( "%d",&size );
	
	// ENTER THE ELEMENTS IN AN ARRAY
	for( i=0 ; i<size ; i++ )
	{
		printf( "a[%d] = ",i );
		scanf( "%d", &a[i] );
	}
	
	// THE REVERSE OF AN ARRAY
	printf( "\nReverse of an Array.. :- " );
	for( i = size-1 ; i >= 0 ; i-- )
	{
		printf( "\na[%d] = %d",i,a[i] );
	}
}
