/* NAME SAI KUMAR SATAPATHY*/
/*CSE*/
/*queue using linked list*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node *next;
}*front = NULL,*rear = NULL;

void insert(int);
void delete();
void display();

void main()
{
   int choice, value;
   printf("\n:: QUEUE USING LINKED LIST\n");
   while(1)
   {
       printf("\n----- MENU ----\n");
       printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
       printf("Enter your choice: ");
       scanf("%d",&choice);
       switch(choice)
       {
            case 1: 
                printf("Enter the value to be insert: ");
                scanf("%d", &value);
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
                printf("\nWrong selection\n");
      }
   }
}
void insert(int value)
{
   struct node *newnode;
   newnode = (struct node*)malloc(sizeof(struct node));
   newnode->data = value;
   newnode -> next = NULL;
   if(front == NULL)
   {
       front = rear = newnode;
   }
   else
   {
      rear -> next = newnode;
      rear = newnode;
   }
   printf("\nInserted\n");
}
void delete()
{
   if(front == NULL)
   {
       printf("\nQueue is Empty!!!\n");
   }
   else
   {
      struct node *temp = front;
      front = front -> next;
      free(temp);
   }
}

void display()
{
   if(front == NULL)
   {
       printf("\nQueue is Empty!!!\n");
   }
   else
   {
      struct node *temp;
      temp= front;
      printf("THE DATA ARE:-\n");
      while(temp!=NULL)
      {
          printf("%d\n",temp->data);
          temp = temp -> next;
      }    
   }
    printf("\n");
}