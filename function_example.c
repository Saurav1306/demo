/* 
	FUNCTION EXAMPLE OF. CALL BY VALUE
*/

#include<stdio.h>

void function1();      //function declaration
void function2(int);	//function declaration
int square_of_number(int);	//function declaration

void main()
{
	int number, sqnumber;
	function1();
	scanf("%d", &number);
	function2(number);
	sqnumber = square_of_number(number);
	printf("\n Its square is %d", sqnumber);
}


void function1()
{
	printf("Enter the number: ");
}

void function2(int number)
{
	printf("\n You have entered the number=%d", number);	
}

int square_of_number(int number)
{
	return number*number;
}
