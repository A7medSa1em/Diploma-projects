/*
 * main.c
 *
 *  Created on: Jul 6, 2021
 *      Author: A7med
 */

# include <stdio.h>
int main()
{
	char s[1000],c;
	int i,f=0;
	printf("Enter a String:\n");
	fflush(stdout);
	gets(s);
	printf("\nEnter the Character  to be searched:");
	fflush(stdout);
	scanf("%c",&c);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==c)
			f++;
	}
	printf("frequency of %c is %d", c,f);
	return 0;
}
