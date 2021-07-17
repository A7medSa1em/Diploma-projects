/*
 * main.c
 *
 *  Created on: Jul 2, 2021
 *      Author: A7med
 */


#include<stdio.h>
int main ()
{
	char x;
	printf("enter a character:");
	fflush(stdout);
	scanf("%c",&x);
	if ((x>='a'&& x<='z')||(x >='A' && x<='Z'))
		printf("the character %s is alphabet",&x);
	else
		printf("the character %s isn't alphabet",&x);


	return 0;
}
