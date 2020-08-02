/*NAME: SAI KUMAR SATAPATHY*/
/*CSE*/
/*MERGE TWO ARRAY IN ASCENDING ORDER STORING IT IN ANOTHER ARRAY*/
#include<stdio.h>
void merge(int a1[], int a2[],int a3[],int n, int m)
{
	int k=0,i,j,t;
	for(i=0;i<n;i++)
		a3[k++]=a1[i];
	for(i=0;i<m;i++)
		a3[k++]=a2[i];
	for(i=0;i<(m+n)-1;i++)
	{
		for(j=0;j<((m+n)-i-1);j++)
		{
			if(a3[j]>a3[j+1])
			{
				t=a3[j];
				a3[j]=a3[j+1];
				a3[j+1]=t;
			}
		}
	}
}

	
main()
{
	int a1[100],a2[100],a3[100],n,m,i;
	printf("Enter the size of first array\n");
	scanf("%d",&n);
	printf("\nEnter the Element of first array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a1[i]);
	}

	printf("Enter the size of second array\n");
	scanf("%d",&m);
	printf("\nEnter the Element of second array\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a2[i]);
	}
	printf("The 1st array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a1[i]);
	}
	printf("\nThe 2nd array is\n");
	for(i=0;i<m;i++)
	{
		printf("%d\t",a2[i]);
	}
	merge(a1,a2,a3,n,m);
	printf("\n the required new array is\n");
	for(i=0;i<m+n;i++)
	{
		printf("%d \t",a3[i]);
	}
	printf("\n");
}
	
