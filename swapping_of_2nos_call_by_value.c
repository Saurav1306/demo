/* SWAPPING OF TWO NUMBERS USING CALL BY REFERENCE */

#include<stdio.h>

void swap_two_no(int , int );
void main()
{
	int fno, sno;
	printf("Enter the first number: ");
	scanf("%d", &fno);
	printf("\nEnter the second number: ");
	scanf("%d", &sno);
	printf("\n<---------------------------------------------------->");
	printf("\nBefore swapping the numbers are---First number:%d and Second number: %d", fno, sno);
	swap_two_no(&fno, &sno);
	printf("\n<------------------------------------------------------>");
	printf("\nAfter swapping the nos are----First number:%d and Second number:%d", fno, sno);

}

// code for call by value

void swap_two_no(int first, int second)
{
	int temp;
	temp=first;
	first=second;
	second=temp;
	
}
