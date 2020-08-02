#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 1000


int stack[MAX_SIZE];
int top = -1;

void push(int);
int pop();
bool isEmpty();
bool isFull();
void display();

int toOctal(int);

int main()
{
	int dec ;
	printf("Enter the decimal number : \n");
	scanf("%d", &dec);
	printf("%d", toOctal(dec));
	return 0;
}


int toOctal(int n)
{
	int i = 0;
       	int oct = 0, f = 1;	
	while(n != 0)
	{
		push(n % 8);
		n /= 8;
		i++;
	}

	while(!isEmpty())
	{
		int k = pop();
		oct += k * f;
		if(k == 0)
			oct *= 10;
		f *= 10;
	}
	
	return oct;
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

bool isEmpty()
{
	return top == -1;
}


bool isFull()
{
	return top >= MAX_SIZE;
}


void display()
{
	int i;
	for(i = 0; i <= top; i++)
	{	
		printf(" ______");
		printf("|%5d|\n", stack[i]);
		printf(" ------");
	}
}

