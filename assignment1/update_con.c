/*WAP TO UPDATE THE CONTENT OF AN ARRAY WHEN ELEMENT VALUE IS GIVEN*/
/* NAME SAI KUMAR SATAPATHY*/
/*CSE*/
#include<stdio.h>
void update(int a[100],int n,int no,int dig)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==dig)
        {
            a[i]=no;
        }
    }
}
int main()
{
    int a[100],i,n,no,dig;
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
    }
    printf("\nEnter the no you want to update and new no\n");
    scanf("%d%d",&dig,&no);
    update(a,n,no,dig);
    printf("\nElement updated \n");
    printf("\nNew array \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
