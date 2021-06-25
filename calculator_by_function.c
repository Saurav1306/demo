/* CODE FOR CALCULATOR BY USING CALL BY REFERENCE */

#include<stdio.h>

void sum(int*, int*, int*);
void difference(int*, int*, int*);
void multiply(int*, int*, int*);
void division(int*, int*, int*);

void main()
{
	int fno,sno,result,choice;
	printf("Enter the first number: ");
	scanf("%d", &fno);
	printf("\nEnter the second number: ");	
	scanf("%d", &sno);
	printf("Enter your choice ---------\n1 for addition \t \n2 for subtraction  \t  \n3 for multiplication  \t  \n4 for division\n");
	scanf("\n%d", &choice);
	switch(choice)
	{
		case 1:
			sum(&fno,&sno,&result);
			break;
		case 2:
			difference(&fno,&sno,&result);
			break;
		case 3:
			multiply(&fno, &sno, &result);
			break;
		case 4:
			division(&fno, &sno, &result);
			break;
		default:
			result=0;
	}		
	printf("_____\n The required result=%d", result);
		
}

void sum(int *f,int *s,int *r)
{
	*r=*f + *s;
}

void difference(int *f,int *s,int *r)
{
	*r=*f - *s;
}

void multiply(int *f,int *s,int *r)
{
		*r=*f * *s;
}

void division(int *f,int *s,int *r)
{
	*r=*f / *s;
}
