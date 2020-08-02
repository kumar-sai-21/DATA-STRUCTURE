/* WAP TO FIND UPPER DIAGONAL OF A MATRIXgc*/
/* NAME SAI KUMAR SATAPATHY*/
/*CSE*/
#include<stdio.h> 
void upper_diagonal(int row,int col, int a[10][10])
{
	int i,j;
	printf("\nThe upper diagonal elements of the matrix is\n");
	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<col;j++)
		
			if(i<j)
				printf("%d\t",a[i][j]);
			else
			printf(" \t");
	}
}
int main()
{
	int a[10][10],i,j,row,col;
	  
	printf("\nEnter the row and column size of matrix");
	scanf("%d %d",&row,&col);
	printf("\nEnter the matrix elements->\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{ 		 		     
			scanf("%d",&a[i][j]);
		}
	} 		
      
	printf("\nThe entered matrix is\n");
	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<col;j++)
		{
			printf("%d\t",a[i][j]);
		}
		
	}
    upper_diagonal(row,col,a);
}
