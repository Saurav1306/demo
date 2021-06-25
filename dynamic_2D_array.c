/*
Dynamic allocation of 2D array
*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int r,c;
	int i,j,count=0;
	
	printf("Enter the row size of the matrix: ");
	scanf("%d", &r);
	
	printf("Enter the column size of the matrix:");
	scanf("%d", &c);
	
	int *arr=(int*)malloc(r*c*sizeof(int));
	printf("Enter the matrix element____________");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\nEnter the a[%d][%d]: ",i,j);
			scanf("%d",(arr + i*c +j)= i+j);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d", *(arr + i*c + j));
		}
		printf("\n");
	}
}
