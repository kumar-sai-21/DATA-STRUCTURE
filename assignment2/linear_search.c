#include<stdio.h>
void linear_search(int n, int a[100],int num )
{
	int i,p;
	for(i=0;i<n;i++)
	{
		if(a[i]== num)
		{
			p=1;
			break;
		}
	}
	if(p==1)
	{
		printf("Element is found\n");
	}
	else
	{
		printf("Element is not found\n");
	}
}
main()
{
	int a[100],i,n,num;
	printf("Enter the size of array\n ");
	scanf("%d",&n);
	printf("Enter the element in the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The original array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	printf("Enter the element to search\n");
	scanf("%d",&num);
	linear_search(n,a,num);
}

	
