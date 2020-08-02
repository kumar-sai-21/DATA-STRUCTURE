/* C Program to check Matrix is a Symmetric Matrix or Not */
 
#include<stdio.h>
void transpose(int a[10][10],int b[10][10],int i,int j)
{
    int rows,columns;
    int count=0;
   	//Transpose of matrix 
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j; columns++)
    	{
      		b[columns][rows] = a[rows][columns];
    	}
  	}
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
    		if(a[rows][columns] == b[rows][columns])
    		{
    			count++;  
			
			}
   	 	}
  	}
  	if(count=rows*columns)
  	{
  		printf("\n The Matrix that you entered is a Symmetric Matrix ");
	}
	else
	{
		printf("\n The Matrix that you entered is Not a Symmetric Matrix ");
	}
  	
}
int main()
{
 	int i, j, rows, columns, a[10][10], b[10][10];
  
 	printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d %d", &i, &j);
 
 	printf("\n Please Enter the Matrix Elements \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{ 
      		scanf("%d", &a[rows][columns]);
    	}
  	}
    transpose(a,b,i,j);
}
