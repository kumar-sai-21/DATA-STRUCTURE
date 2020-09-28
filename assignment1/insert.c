/* NAME SAI KUMAR SATAPATHY*/
/*CSE*/
/*insert an element to a given array index and find how many element in the array -- sai ku. satapathy*/
#include<stdio.h>
void insert(int n, int arr[100],int no,int pos)
{
	int i;
	for(i=n-1;i>=pos;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[pos]=no;

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
	printf("Enter the element in the array and the position \n");
	scanf("%d%d",&no,&pos);
	insert(n,arr,no,pos);
	printf("new array displayed\n");
	for(i=0;i<=n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
