/* WAP TO FIND THE TRIPLET FORM OF TRANSPOSE OF A SPARSE MATRIX*/
/* NAME SAI KUMAR SATAPATHY
   CSE*/
#include<stdio.h>
void input(int [][10], int, int);
void triplet(int [][10], int [][3], int, int);
void transpose(int [][3], int [][3]);
//you write thedisplay function
main()
{
	int a[10][10], n, m, i, t[20][3], k, j, tr[20][3], l = 1;
	printf("enter the no of row&colom");
	scanf("%d%d", &m, &n);
	input(a, m, n);
	triplet(a, t, m, n);
	transpose(t, tr);
}
void input(int s[][10], int m, int n)
{
	int i, j;
	printf("enter element to the sparse matrix");
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", &s[i][j]);
		}
	}
}
void triplet(int s[][10], int t[][3], int m, int n)
{
	int i, j, k;
	t[0][0] = m;
	t[0][1] = n;
	k = 1;
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(s[i][j] != 0)
			{
				t[k][0] = i;
				t[k][1] = j;
				t[k][2] = s[i][j];
				k++;
			}
		}
	}
	t[0][2] = k-1;
	printf("Triplet Matrix is \n");
	for(i = 0; i < k; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d\t", t[i][j]);
		}
		printf("\n");
	}
}
void transpose(int t[][3], int tr[][3])
{
	int i, j, k;
	tr[0][0] = t[0][1];
	tr[0][1] = t[0][0];
	tr[0][2] = t[0][2];
	k = 1;
	for(j = 0; j < t[0][1]; j++)
	{
		for(i = 1; i <= t[0][2]; i++)
		{
			if(t[i][1] == j)
			{
				tr[k][0] = t[i][1];
				tr[k][1] = t[i][0];
				tr[k][2] = t[i][2];
				k++;
			}
		}
	}
	printf("Transpose Matrix is \n");
	for(i = 0; i <= tr[0][2]; i++)
	{
		printf("%d\t%d\t%d\t", tr[i][0], tr[i][1], tr[i][2]);
		printf("\n");
	}
}