/*
Alphabet using while loop
HERE WE WILL USE ASCII CODE FOR ALPHABETS
*/

#include<stdio.h>

void main()
{
	int ascii_code=32;
	while(ascii_code<=120)
	{
		printf("Ascii code=%d \t and character=%c\n", ascii_code, ascii_code);
		ascii_code++;
	}
}
