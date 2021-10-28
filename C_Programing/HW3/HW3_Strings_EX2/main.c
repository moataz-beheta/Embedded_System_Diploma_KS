/*
 * main.c
 *
 *  Created on: Oct 28, 2021
 *      Author: Moataz
 */

#include "stdio.h"

void main ()
{
	char Entered_String[100];
	int Length = 0 ;
	int i;

	//Get the string from the user
	printf ("Enter a string : ");
	fflush(stdin); fflush(stdout);
	gets(Entered_String);


	//Find the length of string and print it
	for (i=0 ; Entered_String[i] != '\0' ; i++)
	{
		Length ++;
	}
	printf("Length of string : %d",Length);
}
