
/*
 * main.c
 *
 *  Created on: Jul 10, 2021
 *      Author: A7med
 */


# include <stdio.h>
int Primenumbers(int i);
int main()
{
	int x,y ;
	printf("Enter Two numbers");
	fflush(stdout);
	scanf("%d%d",&x,&y);
	printf("The prime numbers between %d and %d are :\n",x,y);
	int i,f;
	for(i=x+1;i<y;++i){
		f = Primenumbers(i);
		if (f==0){
			printf("%d ",i);
		}
	}
	return 0;
}
int Primenumbers(int  i)
{
	int j,f=0;
	for(j=2;j<=i/2;j++){
		if(i%j==0){
			f=1;
			break;
		}
	}
	return f;
}
