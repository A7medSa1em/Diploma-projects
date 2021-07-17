/*
 * main.c
 *
 *  Created on: Jul 3, 2021
 *      Author: A7med
 */


#include <stdio.h>
int main ()
{
	int mat[10][10],tran[10][10],x,y,i,j;
	printf("Enter the number of rows and columns");
	scn:
	fflush(stdout);
	scanf("%d%d",&x,&y);
	if (x>0&&y>0)
	{
		for (i=0;i<x;i++)
		{
			for (j=0;j<y;j++)
			{
				printf("Enter element mat%d%d \n",i,j);
				fflush(stdout);
				scanf("%d",&mat[i][j]);
			}
		}
		printf("the matrix you entered is:\n");
		for (i=0;i<x;i++)
		{
			for (j=0;j<y;j++)
			{
				printf("%d ",mat[i][j]);
			}printf("\n");
		}
		for (i=0;i<=x;i++)
		{
			for(j=0;j<=y;j++)
			{
				tran[j][i]=mat[i][j];
			}
		}
		printf("the transpose is:\n");
		for (i=0;i<y;i++)
		{
			for (j=0;j<x;j++)
			{
				printf("%d ",tran[i][j]);
			}printf("\n");
		}
	}
	else
	{
		printf("please Enter +ve integers value for rows and column");
		goto scn;

	}

	return 0;
}
