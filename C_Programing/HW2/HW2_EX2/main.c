/*
 * main.c
 *
 *  Created on: Oct 27, 2021
 *      Author: Moataz
 */

#include "stdio.h"

void main ()
{
	char Entered_Character=0;

	printf ("Enter an alphabet : ");

	fflush(stdin); fflush(stdout);

	scanf ("%c",&Entered_Character);

	switch (Entered_Character)
	{
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
		printf("\n%c is a vowel.",Entered_Character);
		break;
	default:
		printf("\n%c is a constant.",Entered_Character);
		break;
	}
}
