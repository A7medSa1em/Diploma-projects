/*
 * main.c
 *
 *  Created on: Jul 2, 2021
 *      Author: A7med
 */


#include <stdio.h>
int main ()
{
	int x;
	printf("Enter the number:");
	fflush(stdout);
	scanf("%d",&x);
	if (x%2==0){
		printf("the number %d is even",x);

	}
	else
	{
		printf("the number  %d is odd",x);
	}

	return 0;
}
