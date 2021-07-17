/*
 * main.c
 *
 *  Created on: Jul 2, 2021
 *      Author: A7med
 */


#include <stdio.h>
int main()
{
	char c;
	printf("enter the character:");
	fflush(stdout);
	scanf("%c",&c);
	if (c=='a'||c=='A'||c=='o'||c=='O'||c=='e'||c=='i'||c=='u'||c=='E'||c=='I'||c=='U')
	{
		printf("this character %s is a vowel",&c);
	}
	else
		printf("this character %s isn't vowel",&c);


	return 0;
}
