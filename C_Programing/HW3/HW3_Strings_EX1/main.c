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
	char Desired_Character;
	int Frequency = 0 ;
	int i;

	//Get the string from the user
	printf ("Enter a string : ");
	fflush(stdin); fflush(stdout);
	gets(Entered_String);


	//Get the letter from the user to check its frequency
	printf ("Enter a character to find frequency : ");
	fflush(stdin); fflush(stdout);
	scanf ("%c",&Desired_Character);

	//Find the frequency and print it
	for (i=0 ; Entered_String[i] != '\0' ; i++)
	{
		if (Entered_String[i] == Desired_Character )
			Frequency ++;
	}
	printf("frequency of %c : %d",Desired_Character,Frequency);

}
