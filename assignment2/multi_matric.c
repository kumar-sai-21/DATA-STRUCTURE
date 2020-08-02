/* WAP TO MULTIPLY TWO MATRIX*/
/* NAME SAI KUMAR SATAPATHY*/
/*CSE*/
#include<stdio.h>
void read(int a[10][10],int  n,int m )
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void multi_matrix(int a1[10][10],int a2[10][10], int n,int m,int multi[10][10])
{
	int i,k,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k<n;k++)
			{
				multi[i][j]=multi[i][j]+a1[i][k]*a2[k][j];
			}
		}
	}
}
void print_matrix(int multi[10][10], int m, int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",multi[i][j]);
		}
		printf("\n");
	}

}
main()
{
	int a1[10][10],a2[10][10],n,m,i,j,multi[10][10];
	printf("Enter the size of matrix\n");
	scanf("%d%d",&n,&m);
	printf("\nEnter the element in 1st matrix\n");
	read(a1,n,m);
	printf("\nEnter the element in 2nd matrix\n");
	read(a2,n,m);
	printf("\nThe multiplication of two matrix is \n");
	multi_matrix(a1,a2,n,m,multi);
	print_matrix(multi,m,n);
}

	
