/*WAP TO UPDATE PARTICULAR LOCATION OF AN ARRAY WITH THE GIVEN VALUE*/
/* NAME SAI KUMAR SATAPATHY*/
/*CSE*/
#include<stdio.h>
void update(int a[100],int n,int no,int loc)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(loc==i)
        {
            a[i]=no;
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
    }
    printf("\nEnter the element you want to update and its location\n");
    scanf("%d%d",&no,&loc);
    update(a,n,no,loc);
    printf("\nElement updated \n");
    printf("\nNew array \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
