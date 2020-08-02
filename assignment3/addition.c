/* WAP TO ADD TWO TRIPLET MATRIX*/
/* NAME SAI KUMAR SATAPATHY
   CSE*/
#include<stdio.h>
char compare(int, int);
void display(int a[10][3])
{
	int i,j;
	for(i=0;i<a[0][2]+1;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t ",a[i][j]);
		}
		printf("\n");
	}
}
void read(int a[10][3])
{
	int i,j,row;
	printf("Enter the no. fo rows :");
	scanf("%d",&row);
	for(i=0;i<row;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void add_sparse(int m1[][3],int m2[][3],int m3[][3])
{
	int m=m1[0][2];
	int n=m2[0][2];
	m3[0][0]=m1[0][0];
	m3[0][1]=m1[0][1];
	int i=1;
	int j=1;
	int k=0;
	while(i<=m && i<=n)
	{
		k++;
		switch(compare(m1[i][0],m2[j][0]))
		{
			case'=':
				switch(compare(m1[i][1],m2[j][1]))
				{
					case'=':
						m3[k][0]=m1[i][0];
						m3[k][1]=m1[i][1];
						m3[k][2]=m1[i][2]+m2[j][2];
						i++;
						j++;
						break;
					case'<':
						m3[k][0]=m1[i][0];
						m3[k][1]=m1[i][1];
						m3[k][2]=m1[i][2];
						i++;
						break;
					case'>':m3[k][0]=m2[j][0];
						m3[k][1]=m2[j][1];
						m3[k][2]=m2[j][2];
						j++;
						break;
				}
				break;
			  case'<':

				m3[k][0]=m1[i][0];
				m3[k][1]=m1[i][1];
				m3[k][2]=m1[i][2];
				i++;
				break;
			case'>':
				m3[k][0]=m2[j][0];
				m3[k][1]=m2[j][1];
				m3[k][2]=m2[j][2];
				j++;
				break;
		}
	}
	while(i<=m)
	{
		k++;
		m3[k][0]=m1[i][0];
		m3[k][1]=m1[i][1];
		m3[k][2]=m1[i][2];
		i++;
	}
	while(j<=n)
	{
		k++;
		m3[k][0]=m2[j][0];
		m3[k][1]=m2[j][1];
		m3[k][2]=m2[j][2];
		j++;
	}
	m3[0][2]=k;
	
}

char compare(int x ,int y)
{
	if(x<y)
		return('<');
	else if(x>y)
		return('>');
	else
		return('=');
}
main()
{
	int size;
	int m1[10][3], m2[10][3],m3[10][3], row, col;
	printf("\nEnter the 1st triplet\n");
	read(m1);
	printf("\nEnter the 2nd triplet\n");
	read(m2);
	add_sparse(m1,m2,m3);
	printf("Addition of two triplet\n");
	display(m3);

}


