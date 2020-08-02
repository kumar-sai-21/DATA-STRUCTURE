/*WAP TO IMPLEMENT CIRCULAR QUEUE
  SAI KUMAR SATAPATHY
  CSE*/
#include<stdio.h>
#include<stdlib.h>
#define size 5
int queue[size],front=-1,rear=-1;
void insert(int value)
{
	if( front== (rear+1)%size)
		printf("Queue is full\n");
	else
	{
	       	if (front==-1)
			front=rear=0;
		else
		{
			rear=((rear+1)%size);
		}
		
		queue[rear]= value;
		printf("Insert success\n");
		
	}

}
int delete()
{
	int item;
	if(front==-1)
		printf("Queue is empty\n");
	else
	{
		item=queue[front];
		if(front ==rear)
			front=rear=-1;
		else
			front=((front+1)%size);
	}
	printf("\n deleted\n");
	return item;
}
void display()
{
	int i;
	if(front<=rear)
	{
		printf("\n queue element  are\n");
		for(i=front;i<=rear;i++)
			printf("\n%d\n",queue[i]);
	}
	else
	{
		for(i=front;i<=size-1;i++)
		{
			printf("%d\n",queue[i]);
		}
		for(i=0;i<=rear;i++)
			printf("%d\n",queue[i]);
	}
}
void main()
{
	int value,choice;
	while(1)
	{
		printf("\nMENU\n");
		printf("1.insert\n");
		printf("2.delete\n");
		printf("3.display\n");
		printf("4. Quit\n");
		printf("\nEnter  your Choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\nEnter the value \n");
				scanf("%d",&value);
				insert(value);
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("\n Wrong selection\n");
		}
	}
}

