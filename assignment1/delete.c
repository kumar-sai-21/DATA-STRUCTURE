/*delete an element to a given array index and find how many element in the array -- sai ku. satapathy*/
#include<stdio.h>
void delete(int n, int arr[100],int pos)
{
	int i;
	for(i=pos;i<n;i++)
	{
		arr[i]=arr[i+1];
	}

}
main()
{
	int i,n,no, pos,arr[100];
	printf("Emter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the no  in the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n original array displayed\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("Enter the  position to delete \n");
	scanf("%d",&pos);
	delete(n,arr,pos);
	printf("new array displayed\n");
	for(i=0;i<n-1;i++)
	{
		printf("%d\t",arr[i]);
	}
}
