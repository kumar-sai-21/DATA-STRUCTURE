#include<stdio.h>
#include<string.h>
 
#define max 20
 
int element;
int top = -1;
char stacka[max];
void push(char element);

char pop();
 
void main()
{
        char stacks[30];
        int count;
        printf("Enter A String:\t");
        scanf("%s", stacks);
        for(count = 0; count < strlen(stacks); count++)
        {
                push(stacks[count]);
        }
        for(count = 0; count < strlen(stacks); count++)
        {
                stacks[count] = pop();
        }
        printf("%s", stacks);
        printf("\n");
}
 
void push(char element)
{
        if(top==max-1)
        {
                printf("\nStack full\n");
        }
        else
        {
                top = top + 1;
                stacka[top] = element;
        }
}
 
char pop()
{
        if(top== -1)
        {
                printf("\nEmpty\n");
        
        }
        else
        {
                element = stacka[top];
                top = top - 1;
                return element;
        }
}