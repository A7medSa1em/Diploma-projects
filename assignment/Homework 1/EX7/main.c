/*
 * main.c
 *
 *  Created on: Jul 2, 2021
 *      Author: A7med
 */


#include<stdio.h>
int main()
{
	float x,y;
	printf("Enter value of X:");
	fflush(stdout);
	scanf("%f",&x);
	printf("Enter value of Y:");
	fflush(stdout);
	scanf("%f",&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("value of X after changing= %.2f\n",x);
	printf("value of Y after changing= %.2f\n",y);

	return 0;

}
