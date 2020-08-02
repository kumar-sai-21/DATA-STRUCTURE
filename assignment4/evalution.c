/* WAP TO EVALUTION OF POSTFIX EXPRESSION
   SAI KUMAR SATAPATHY
   CSE*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define max 20
int s[max];
int top=-1;
void push(int item)
{
	if(top==max-1)
	{
		printf("stack full\n");
		exit(1);
	}
	else
	{
		top= top+1;
		s[top]=item;
	}
}
int pop ()
{
	int item;
	if (top ==-1)
	{
		printf("empty\n");
	}
	else
	{
		item=s[top];
		top=top-1;
	}
	return item;
}
int postfix_eva(char po[])
{
	int i=0;
	int r=0;
	int op1,op2;
	while(po[i])
	{
		if(po[i]>='0'&&po[i]<='9')
		{
			push(po[i]-'0');
			
		}
		else
		{
			op2=pop();
			op1=pop();
			switch(po[i])
			{
				case '+':
					r=op1+op2;
					break;
				case '-':
					r=op1-op2;
					break;
				case '/':
					r=op1/op2;
					break;
				case '$':
					r=pow(op1,op2);
					break;
			}
			push(r);
		}
		i++;
	}
	return pop();
}
int main()
{
	char po[max];
	printf("Enter the postfix\n");
	gets(po);
	int a=postfix_eva(po);
	printf(" exprssion\n");
	printf("%d\n",a);
	return 0;
}

