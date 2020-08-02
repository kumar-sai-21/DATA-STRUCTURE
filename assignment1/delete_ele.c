/*WAP TO DELETE AN ELEMENT FROM AN ARRAY*/
/* NAME SAI KUMAR SATAPATHY*/
/*CSE*/

#include<stdio.h>
void delete (int a[100],int n,int no,int count)
{
    int i,j ;
    for(i=0;i<n;i++)
    {
        if(a[i]==no)
        {
            for(j=i;j<n;j++)
            {
                a[j]=a[j+1];
            }
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("\nElement not found\n");
    }
    else
    {
        printf("\nElement deleted \n");
        printf("\nNew array \n");
        for(i=0;i<(n-1);i++)
        {
            printf("%d\t",a[i]);
        }
    }
    
}
int main()
{
    int a[100],i,n,no,count=0;
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
    printf("\nEnter the element you want to delete\n");
    scanf("%d",&no);
    delete(a,n,no,count);
    

}

