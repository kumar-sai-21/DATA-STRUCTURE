/*NAME : SAI KUMAR SATAPATHY*/
/*multiply two given array element and store it in 3rd array*/
/*CSE*/
#include<stdio.h>
void multiply(int[],int[],int);
void input(int[],int);
main()
{
	int size;
	printf("ENter the size of array : ");
	scanf("%d",&size);
	int a[size],b[size];
	printf("1st array :\n");
	input(a,size);
	printf("2nd array :\n");
	input(b,size);
	multiply(a,b,size);
}

void input(int x[],int s)
{
	int i;
	printf("ENter the elements of array : \n");
	for(i=0;i<s;++i)
		scanf("%d",&x[i]);
}

void multiply(int x[],int y[],int s)
{
	int i,multi[s];
	for(i=0;i<s;++i)
	{
		multi[i]=x[i]*y[i];
	}
	printf("Multiplied array :\n");
	for(i=0;i<s;++i)
		printf("%d\n",multi[i]);
}
