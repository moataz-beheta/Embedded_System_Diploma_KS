/*
 * main.c
 *
 *  Created on: Oct 27, 2021
 *      Author: Moataz
 */

#include "stdio.h"

void main ()
{
	char Entered_Character;
	printf ("Enter a character : ");

	fflush(stdin); fflush(stdout);

	scanf ("%c",&Entered_Character);


	if (Entered_Character>=65 && Entered_Character<=90 ||		//Capital Alphabet
		Entered_Character>=97 && Entered_Character<=122	)		//Small Alphabet
	{
		printf("\n%c is an alphabet",Entered_Character);
	}
	else
	{
		printf("\n%c is not an alphabet",Entered_Character);
	}
}
