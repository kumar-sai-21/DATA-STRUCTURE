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
void add_matrix(int a1[10][10],int a2[10][10], int n,int m,int sum[10][10])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			sum[i][j]=a1[i][j]+a2[i][j];
		}
	}
}
void print_matrix(int sum[10][10], int m, int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}

}
main()
{
	int a1[10][10],a2[10][10],n,m,i,j,sum[10][10];
	printf("Enter the size of matrix\n");
	scanf("%d%d",&n,&m);
	printf("\nEnter the element in 1st matrix\n");
	read(a1,n,m);
	printf("\nEnter the element in 2nd matrix\n");
	read(a2,n,m);
	printf("\nThe sum of two matrix is \n");
	add_matrix(a1,a2,n,m,sum);
	print_matrix(sum,m,n);
}

	
