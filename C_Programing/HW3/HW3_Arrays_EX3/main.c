/*
 * main.c
 *
 *  Created on: Oct 28, 2021
 *      Author: Moataz
 */


#include "stdio.h"

void main ()
{
	int Rows;
	int Columns;

	// Get the number of data from user

	printf ("Enter rows and columns of matrix : ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&Rows,&Columns);


	int a[Rows][Columns];
	int b[Columns][Rows];


	int i;
	int j;

	// Get the elements of matrix from user
	printf ("Enter all elements matrix \n");
	for (i=0 ; i<Rows ; i++)
	{
		for (j=0 ; j<Columns ; j++)
		{
			printf ("Enter element a%d%d :",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%d",&a[i][j]);
		}
	}

		printf ("\nEntered matrix \n");
	for (i=0 ; i<Rows ; i++)
	{
		for (j=0 ; j<Columns ; j++)
		{
			printf ("%d\t",a[i][j]);
		}
		printf ("\n");
	}

	// Find the transpose
	for (i=0 ; i<Rows ; i++)
	{
		for (j=0 ; j<Columns ; j++)
		{
			b[j][i]=a[i][j];
		}
	}

	// print the transpose
	printf ("\nTranspose of matrix \n");
	for (i=0 ; i<Columns ; i++)
	{
		for (j=0 ; j<Rows ; j++)
		{
			printf ("%d\t",b[i][j]);
		}
		printf ("\n");
	}
}
