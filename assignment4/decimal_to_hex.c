//WAP TO CONVERT DECIMAL TO HEXADECIMAL
//SAI KUMAR SATAPATHY
// CSE
#include <stdio.h>
#define MAX_SIZE 1000


int stack[MAX_SIZE];
int top = -1;

void push(int);
int pop();
int isEmpty();
int isFull();
void display();

void toHex(int);

int main()
{
	int dec ;
	printf(" decimal number : \n");
	scanf("%d", &dec);
	toHex(dec);
	return 0;
}


void toHex(int n)
{	
	while(n != 0)
	{
		push(n % 16);
		n /= 16;
	}
	
	
	int k;
	while(!isEmpty())
	{
		k = pop();
		if(0 <= k && k <= 9)
		
			printf("%d", k);
		else
			printf("%c", 'a' + (k - 10));
	}
	
	printf("\n");	
}

// stack functions :

void push(int el)
{
	if(top >= MAX_SIZE)
		return;
	stack[++top] = el;
}

int pop()
{
	if(top >= 0)
		return stack[top--];
	printf("Stack is full. \n");
	return -1;
}

int isEmpty()
{
	return top == -1;
}


int isFull()
{
	return top >= MAX_SIZE;
}


void display()
{
	int i;
	for(i = 0; i <= top; i++)
	{	
		printf("%d\n", stack[i]);
	}
}

