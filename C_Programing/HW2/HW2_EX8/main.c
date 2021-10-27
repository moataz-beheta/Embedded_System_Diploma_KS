/*
 * main.c
 *
 *  Created on: Oct 27, 2021
 *      Author: Moataz
 */

#include "stdio.h"

void main ()
{
	char operator;
	float First_Number=0;
	float Second_Number=0;
	float Result=0;

	printf ("Enter operator either + or - or * or / : ");

	fflush(stdin); fflush(stdout);

	scanf ("%c",&operator);

	printf ("\nEnter 2 operands : ");

	fflush(stdin); fflush(stdout);

	scanf ("%f %f",&First_Number,&Second_Number);

	switch (operator)
	{
		case '+':
		{
			Result = First_Number + Second_Number;
			printf ("\nResult of %f %c %f = %f : ",First_Number,operator,Second_Number,Result);
			break;
		}

		case '-':
		{
			Result = First_Number - Second_Number;
			printf ("\nResult of %f %c %f = %f : ",First_Number,operator,Second_Number,Result);
			break;
		}

		case '*':
		{
			Result = First_Number * Second_Number;
			printf ("\nResult of %f %c %f = %f : ",First_Number,operator,Second_Number,Result);
			break;
		}

		case '/':
		{
			Result = First_Number / Second_Number;
			printf ("\nResult of %f %c %f = %f : ",First_Number,operator,Second_Number,Result);
			break;
		}

		default:
			printf ("\nPlease enter a valid operator");
	}
}
