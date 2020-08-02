//WAP TO CONVET DECIMAL TO BINARY
//SAI KUMAR SATAPATHY
#include <stdio.h>
#define MAX_SIZE 1000

int stack[MAX_SIZE];
int top = -1;

void push(int);
int pop();
int isEmpty();
int isFull();
void display();

long toBinary(int);

int main()
{	
	int dec;
	printf(" decimal number ");
	scanf("%d", &dec);
	printf(" %ld \n", toBinary(dec));
	return 0;
}



long toBinary(int dec)
{
	int f = 1, temp;
	long bin;
	while(dec > 0)
	{
		temp = dec % 2;
		dec /= 2;
		push(temp);
	}

	while(!isEmpty())
	{	
		int k = pop();
		bin += k * f;
		if(k == 0)
			bin *= 10;
		f *= 10;
	}
	return bin;
}

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
		printf("|%5d|\n", stack[i]);
	}
}

