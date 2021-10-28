/*
 * main.c
 *
 *  Created on: Oct 28, 2021
 *      Author: Moataz
 */

#include "stdio.h"
#include "string.h"

void main ()
{
	char Entered_String[100];
	int Length_Entered_String = 0 ;
	int i;

	//Get the string from the user
	printf ("Enter a string : ");
	fflush(stdin); fflush(stdout);
	gets(Entered_String);

	//Find length of the entered string
	Length_Entered_String=strlen(Entered_String);

	//Create a new string
	char Reversed_String[Length_Entered_String+1]; //+1 for null

	//Find the reverse of string and print it
	for (i=0 ; i<Length_Entered_String ; i++)
	{
		Reversed_String[i] = Entered_String[Length_Entered_String-1-i];
	}
	printf("Reverse string is : %s",Reversed_String);
}

