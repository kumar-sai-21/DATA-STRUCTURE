/* WAP TO FIND TRANSPOSE OF A MATRIX*/
/* NAME SAI KUMAR SATAPATHY*/
/*CSE*/
#include<stdio.h>
void read(int a[10][10],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void transpose_matrix(int a1[10][10], int n,int sum[10][10])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum[i][j]=a1[j][i];
		}
	}
}
void print_matrix(int a1[10][10], int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a1[i][j]);
		}
		printf("\n");
	}

}
void matrix(int sum[10][10], int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}

}
main()
{
	int a1[10][10],a2[10][10],n,i,j,sum[10][10];
	printf("Enter the size of matrix\n");
	scanf("%d",&n);
	printf("\nEnter the element in matrix\n");
	read(a1,n);
	printf("\n the original matrix is\n");
	print_matrix(a1,n);
	printf("\nThe transpose of  matrix is \n");
	transpose_matrix(a1,n,sum);
	matrix(sum,n);
}

	
