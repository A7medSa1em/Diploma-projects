/*
 * main.c
 *
 *  Created on: Jul 2, 2021
 *      Author: A7med
 */


# include <stdio.h>

int main()
{
	float a,b,c;
	printf("Enter the Three values");
	fflush(stdout);
	scanf("%f%f%f",&a,&b,&c);
	if (a>b && a>c)
		printf("the Value %.2f is the largest",a);
	if (b>a&&b>c)
		printf("the Value %.2f is the largest",b);
	if(c>a&&c>b)
		printf("the Value %.2f is the largest",c);
	return 0 ;
}
