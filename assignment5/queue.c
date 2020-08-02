/*WAP TO IMPLEMENT QUEUE
  SAI KUMAR SATAPATHY
  CSE*/
#include<stdio.h>
#include<stdlib.h>
#define size 5
int queue[size],front=0,rear=-1;
void insert(int value)
{
	if(rear== size-1)
		printf("Queue is full\n");
	else
	{
		rear++;
		queue[rear]= value;
		printf("Insert success\n");
	}
}
void delete()
{
	if(rear<front)
		printf("Queue is empty\n");
	else
	{
		printf("Deleted %d",queue[front]);
		front++;
	}
	return queue[front];
}
void display()
{
	int i;
	printf("\n queue element  are\n");
	for(i=front;i<=rear;i++)
	{
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

