/*
 * main.c
 *
 *  Created on: Jul 2, 2021
 *      Author: A7med
 */
# include <stdio.h>
int main()
{
	float x,y,product;
	printf ("Enter two numbers");
	fflush(stdout);
	scanf("%f %f",&x,&y);
	product=x*y;
	printf("product= %f",product);
	return 0;

}
