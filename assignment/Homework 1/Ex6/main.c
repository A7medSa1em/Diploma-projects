/*
 * main.c
 *
 *  Created on: Jul 2, 2021
 *      Author: A7med
 */


#include<stdio.h>
int main(){
	float x,y,z;
	printf("Enter value of X:");
	fflush(stdout);
	scanf("%f",&x);
	printf("Enter value of Y:");
	fflush(stdout);
	scanf("%f",&y);
	z=x;x=y;y=z;
	printf("value of X after changing= %f\n",x);
	printf("value of Y after changing= %f\n",y);



	return 0;
}
