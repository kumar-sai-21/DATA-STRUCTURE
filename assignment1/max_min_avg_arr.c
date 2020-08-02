/*NAME: SAI KUMAR SATAPATHY*/
/*CSE*/
/*Find the maximum,minimum & average of an array*/
#include<stdio.h>
void input(int[],int);
int max(int[],int);
int min(int[],int);
float avg(int[],int);
main()
{
	int size,maxi,mini;
	float avgr;
	printf("Enter the size of the array : ");
	scanf("%d",&size);
	int a[size];
	input(a,size);
	maxi=max(a,size);
	mini=min(a,size);
	avgr=avg(a,size);
	printf("Maximum = %d\nMinimum = %d\nAverage = %f\n",maxi,mini,avgr);
}

void input(int x[],int s)
{
	int i ;
	for(i=0;i<s;i++)
		scanf("%d",&x[i]);
}

int max(int y[],int s)
{
	int i, maxi=y[0];
	for(i=0;i<s;++i)
	{
		if(maxi<y[i])
			maxi=y[i];
	}
	return maxi;
}
int min(int y[],int s)
{
	int i, mini=y[0];
	for(i=0;i<s;++i)
	{
		if(mini>y[i])
			mini=y[i];
	}
	return mini;
}

float avg(int y[],int s)
{
    float avgr,sum=0;
    int i;
    for(i=0;i<s;i++)
        sum+=y[i];
    avgr=sum/s;
    return avgr;
}
