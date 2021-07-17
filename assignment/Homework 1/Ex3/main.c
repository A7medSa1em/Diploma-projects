/*
 * main.c
 *
 *  Created on: Jul 2, 2021
 *      Author: A7med
 */


#include <stdio.h>
int main()
{
	int x,y,sum;
	printf ("Enter 2 integers:");
	fflush (stdout);
	scanf ("%d %d",&x ,&y);
	sum=x+y;
	printf("\nsum= %d",sum);
	return 0;
}
