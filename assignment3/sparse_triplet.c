/* WAP TO CONVERT A SPARSE MATRIX INTO TRIPLET MATRIX*/
/* NAME SAI KUMAR SATAPATHY
   CSE*/
#include<stdio.h>
void read(int a[10][10], int r, int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void triplet(int a[10][10],int b[10][3],int r,int c)
{
	int cnt=0;
	int i,j;
	b[0][0]=r, b[0][1]=c;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]!=0)
			{
				cnt++;
				b[cnt][0]=i;
				b[cnt][1]=j;
				b[cnt][2]=a[i][j];
			}
		}
	}
	b[0][2]=cnt;
}
void print(int b[10][3])
{
	int i,j;
	for(i=0;i<b[0][2]+1;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
main()
{
	int r, c, a[10][10],b[10][3];
	printf("Enter the rows and column of the matrix\n");
	scanf("%d%d",&r,&c);
	printf("\n Enter the element in the matrix\n");
	read(a,r,c);
	triplet(a,b,r,c);
	printf("The sparse matrix \n");
	print(b);
}


