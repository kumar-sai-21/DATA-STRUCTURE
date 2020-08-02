/* WAP TO PRINT SECOND SMALLEST NO IN THE ARRAY   */
/* NAME SAI KUMAR SATAPATHY*/
/*CSE*/
#include<stdio.h>
void second_small(int a[],int n)
{
    int i,j,temp;
    for (i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
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
    int a[100],i,n,no;
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
    second_small(a,n);
    printf("\nThe sorted array is : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nThe second smallest no is: %d \n",a[1]);
}
