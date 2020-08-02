/* WAP TO ARRANGE ALL ELEMENT OF AN ARRAY IN DECENDING ORDER*/
/* NAME SAI KUMAR SATAPATHY*/
/*CSE*/
#include<stdio.h>
void arrange(int a[100],int n)
{
    int i,j,temp;
    for (i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int a[100],i,n,no,j;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the element in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The required array is \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    arrange(a,n);
    printf("\nNew array in decring order is : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

}