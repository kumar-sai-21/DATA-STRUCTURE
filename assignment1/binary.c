/*SAI KUMAR SATAPATHY
 BINARY SEARCH OF GIVEN ARRAY
 CSE*/

#include<stdio.h>
void input (int[],int);
void binary_search(int[],int,int);
void selection_sort(int[],int);
int main()
{
        int size,ele;
        printf("ENter the size of the array : ");
        scanf("%d",&size);
        int a[size];
        //input(a,size);
        int i;
        for(i=0;i<size;++i)
                scanf("%d",&a[i]);
        selection_sort(a,size);
        printf("ENter element to serch : ");
        scanf("%d",&ele);
        binary_search(a,size,ele);
}
/*void input(int x[],int s)
{
        int i;
        for(i=0;i<s;++i)
            scanf("%d",&x[i]);
}*/
void selection_sort(int x[],int s)
{
        int i,j,min,pos,temp;
        for(i=0;i<s;++i)
        {
                pos=i;
                min=x[i];
                for(j=i;j<s;++j)
                {
                        if(min>x[j])
                        {
                                min=x[j];
                                pos=j;
                        }
                }
                temp=x[i];
                x[i]=x[pos];
                x[pos]=temp;
        }
        printf("Sorted array :\n");
        for(i=0;i<s;++i)
                printf("%d\n",x[i]);
}
void binary_search(int x[],int s,int e)
{
        int i,f,l,mid;
        f=0;
        l=s;
        while(f<=l)
        {
                mid=(f+l)/2;
                if(x[mid]==e)
                {
                        printf("Number is found\n");
                        break;
                }
                else if(x[mid]<e)
                        f=mid+1;
                else
                        l=mid-1;
        }
        if(f>l)
                printf("NUmber not found");
}

