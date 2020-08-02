#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*top=NULL;
void push(int);
void pop();
void display();

void main()
{
	int choice, no;
	printf("STACK USING LINKED LIST\n");
	while(1)
	{
		printf("\n------MENU------\n");
		printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
		printf("Enter your Choice\n");
		scanf("%d",&choice);
		switch (choice)
		{
		case 1:
			printf("Enter the no ");
			scanf("%d",&no);
			push(no);
			break;
		case 2:
		    pop();
			break;
		case 3:
		    display();
			break;
		case 4:
		    exit(0);

		default: printf("Wrong Selection\n");
			break;
		}
	}
}
void push(int element)
{
	struct node *newnode;
	newnode=(struct node*) malloc(sizeof(struct node));
	newnode->data=element;
	if(top==NULL)
	{
		newnode->next=NULL;
	}
	else
	{
		newnode->next= top;
	}
	top=newnode;
	printf("Element Inserted\n");
}
void pop()
{
	if(top==NULL)
	{
		printf("Stack is Empty\n");
	}
	else
	{
		struct node *temp;
		temp=top;
		top=top->next;
		printf("Element deleted ");
		free(temp);
	}
}
void display()
{
	if(top==NULL)
	{
		printf("Stack is empty\n");
	}
	else
	{
		
		struct node *temp;
		temp=top;
		printf("\n");
		printf("THE DATA ARE:\n");
		while (temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
	printf("\n");
}