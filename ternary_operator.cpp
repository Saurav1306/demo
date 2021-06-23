/*
TERNARY OPERATOR  ( (condition) ? statement1 : statement2 )
if(condition)
{statement1;}
else
{statement2;}

*/

#include<stdio.h>
int main()
{
	int number;
	int remain;
	printf("Enter the number: ");
	scanf("%d", &number);
	remain= number %2;
	(remain == 0? printf("Entered number %d is an Even number", number):printf("Entered number %d is an Odd number", number));
	return 0;
}
