/*
 * main.c
 *
 *  Created on: Oct 28, 2021
 *      Author: Moataz
 */

#include "stdio.h"

void main ()
{
	float a[2][2];
	float b[2][2];
	float s[2][2];

	int i;
	int j;

	// Get the elements of 1st matrix from user
	printf ("Enter all elements of 1st matrix \n");
	for (i=0 ; i<2 ; i++)
	{
		for (j=0 ; j<2 ; j++)
		{
			printf ("Enter a%d%d :",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}

	// Get the elements of 2nd matrix from user
	printf ("Enter all elements of 2nd matrix \n");

	for (i=0 ; i<2 ; i++)
	{
		for (j=0 ; j<2 ; j++)
		{
			printf ("Enter b%d%d :",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&b[i][j]);
		}
	}

	//add the 2 matrices together and save it in matrix 's'
	for (i=0 ; i<2 ; i++)
	{
		for (j=0 ; j<2 ; j++)
		{
			s[i][j] = a[i][j] + b[i][j];
		}
	}


	// print the sum matrix

	printf ("Sum of the 2 matrices \n");

	for (i=0 ; i<2 ; i++)
	{
		for (j=0 ; j<2 ; j++)
		{
			printf ("%f\t",s[i][j]);
		}
		printf ("\n");
	}

}


