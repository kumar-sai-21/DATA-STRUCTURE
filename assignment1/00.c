#include<stdio.h>
main()
{
	int a,i;
	printf("Enter the size of the array \n");
	scanf("%d",&a);
	int arr[a];
	printf("Enter the no in teh array\n ");
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The required array is\n");
	for(i=0;i<a;i++)
	{
		printf("%d\t\n",arr[i]);
	}
}
