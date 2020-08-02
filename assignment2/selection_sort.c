/*WAP TO IMPLEMENT SELECTION SORT*/
/*NAME SAI KUMAR SATAPATHY*/
/* CSE*/
#include<stdio.h>
void selectionsort(int a[], int n);
void main()
{
	int x[20],n,i;
	printf("Enter total numbers to be sorted");
	scanf("%d",&n);
	printf("\nEnter %d elements",n);
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	selectionsort(x,n);
	printf("\nThe sorted array is");
	for(i=0;i<n;i++)
		printf("%d\t",x[i]);
}
void selectionsort (int a[], int n)
{
	int i,pos,j,large;
	for (i=n-1;i>=0;i--)
	{
		large=a[0];
		pos=0;
		for(j=1;j<=i;j++)
		{
			if(a[j]>large)
			{
				large=a[j];
				pos=j;
			}
		}
		a[pos]=a[i];
		a[i]=large;
	}
}
