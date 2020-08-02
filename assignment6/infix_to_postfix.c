//wap to convert infix to postfix expression//
//name-priyadarshi//
//sec-A1//
//roll-20//
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define max 100
char stack[max];
int top=-1;
char infix[100],p[100];
void push(char);
char pop();
int isOporator(char);
int precedence(char);
void infixtopostfix(char[],char[]);
int main()
{
	int i;
	printf("enter the infix exp\n");
	scanf("%[^\n]",infix);
	infixtopostfix(infix,p);
	printf("postfix exp is %s",p);
	return 0;
}
void push(char item)
{
	if(top>=max-1)
	{
		printf("overflow\n");
	}
	else
	{
		top++;
		stack[top]=item;
	}
}
char pop()
{
	char item;
	if(top<0)
	{
		printf("empty\n");
	}
	else
	{
		item=stack[top];
		top--;
		return item;
	}
}
int isOporator(char s)
{
	if(s=='^'||s=='*'||s=='/'||s=='+'||s=='-')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int precedence(char s)
{
	if(s=='^')
	{
		return 3;
	}
	else if(s=='*'||s=='/')
	{
		return 2;
	}
	else if(s=='+'||s=='-')
	{
		return 1;
	}
	else
		return 0;
}
void infixtopostfix(char infix[],char p[])
{
	char item;
	char x;
	int i=0;
	int j=0;
	push('(');
	strcat(infix,")");
	item=infix[i];
	while(infix[i]!='\0')
	{
		if(item=='(')
		{
			push(item);
		}
		else if(isdigit(item)||isalpha(item))
		{
			p[j]=item;
			j++;
		}
		else if(isOporator(item)==1)
		{
			x=pop();
			while(isOporator(x)==1 && precedence(x)>=precedence(item))
			{
				p[j]=x;
				j++;
				x=pop();
			}
			push(x);
			push(item);
		}
		else if(item==')')
		{
			x=pop();
			while(x!='(')
			{
				p[j]=x;
				j++;
				x=pop();
			}
		}
		else
		{
			printf("invalid\n");
		}
		i++;
		item=infix[i];
	}
	p[j]='\0';
}
