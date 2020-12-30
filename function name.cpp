/*
FUNCTIONS IN C:
A function has 4 entities.
1.return type 
2.function name
3.parameters
4.function body
Function signature=return type + function name + parameters.

There are 2 main types of functions in c:
1. call by value
2. call by reference.

Difference between call by value and call by reference function types
Modular coding
*/

//CALL BY VALUE FUNCTIONS.    PRINT HELLO WORLD

#include<stdio.h>
void print_my_name(char);  //to be declared if more than 1 function is made.

void main()  //void:return type   main:function name  brackets:no parameters
{
	char name='S';
	print_my_name(name);
} //function body

void print_my_name(char n)
{
	printf("HELLO %c", n);
}
	
	

