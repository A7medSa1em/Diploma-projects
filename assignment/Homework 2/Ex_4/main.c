/*
 * main.c
 *
 *  Created on: Jul 2, 2021
 *      Author: A7med
 */


#include<stdio.h>

int main(){
	float a;
	printf ("Enter the number");
	fflush(stdout);
	scanf("%f",&a);
	if (a>0)
		printf("The number %.2f is +ve",a);
	if(a<0)
		printf("The number %.2f is -ve",a);
	if (a==0)
		printf("The number %.2f is Zero",a);
	return 0;
}
