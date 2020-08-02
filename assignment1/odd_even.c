/*WAP TO FIND ODD NO, EVEN NO, POSITIVE NO, NEGATIVE NO PRESENT IN AN RRAY*/
/* NAME SAI KUMAR SATAPATHY*/
/*CSE*/
#include<stdio.h>
void odd(int a[100], int n)
{
    int i;
    printf("\nThe Odd no are:\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d  ",a[i]);
        }
    }
}
void even(int a[100], int n)
{
    int i;
    printf("\nThe Even no are:\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d  ",a[i]);
        }
    }
}
void positive(int a[100], int n)
{
    int i;
    printf("\nThe Positive no are:\n");
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            printf("%d  ",a[i]);
        }
    }
}
void negative(int a[100], int n)
{
    int i;
    printf("\nThe Negative no are:\n");
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf("%d  ",a[i]);
            break;
        }
        else
        {
            printf("\nNo negative  number \n");
            break;
        }
        
    }
}

int main()
{
    int a[100],i,n,no,loc;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("\nEnter the element in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe required array is \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
        printf("\n");
    }
    odd(a,n);
    even(a,n);
    positive(a,n);
    negative(a,n);
}