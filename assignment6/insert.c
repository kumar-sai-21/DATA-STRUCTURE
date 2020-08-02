//WAP TO INSERT A NODE OR DELETE A NODE  IN  SINGLE LINK LIST
//SAI KUMAR SATAPATHY
//CSE
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct link
{
	int data;
	struct link *next;
};
void inserte(struct link *node);
void inserts(struct link *node);
void insertb(struct link *node);
void insertn(struct link *node);

void deleteno(struct link *node);
void deletes(struct link *node);
void deletel(struct link *node);
void deleteb(struct link *node);

void createl(struct link*);
void display();
struct link *start=NULL;
main()
{
	int ch;
	struct link *node;
	node=(struct link*) malloc(sizeof(struct link));
	start=node;
	if(node== '\0')
	{
		printf("out of memory\n");
		exit(0);
	}
	createl(node);
	while(1)
	{
		printf("MENU\n");
		printf("1.Insert in the Beginning\n2.Insert at a particular loc\n3.Insert at the end\n4.Insert after a Node\n");
		printf("5.Delet from start\n6.Delete from last\n7.Delete from a specific location\n8.Delete a given no\n");
		printf("9.display\n10.exit\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insertb(node);
				node=start;
				break;
			case 2: 
				inserts(node);
				break;
			case 3:
				inserte(node);
				break;
			case 4:
				insertn(node);
				break;
			case 5:
				deleteb(node);
				break;
			case 6:
				deletel(node);
				break;
			case 7:
				deletes(node);
				break;
			case 8:
				deleteno(node);
				break;
			case 9:
				display();
				break;
			case 10:
				exit(0);
			default:
				printf("Wrong selection\n");
		}
	}
				
}
void createl(struct link *node)
{
	char ch;
	printf("enter the data\n");
	scanf("%d",&node->data);
	node->next='\0';
	printf("Enter n to exit else any key to continue\n");
	scanf(" %c",&ch);
	while(ch!='n')
	{
		node->next= (struct link*) malloc(sizeof(struct link));
		if (node->next=='\0')
		{
			printf("Out of memory\n");
		}
		node=node->next;
		printf("enter the data\n");
		scanf("%d",&node->data);
		node->next='\0';
		printf("Enetr n to exit else any kkey to continue\n");
		scanf(" %c",&ch);
	}
}
void display()
{
	struct link*node;
	node=start;
	printf("The data are:\n");
	while(node!=NULL)
	{
		printf("%d\t",node->data);
		node=node->next;
	}
	printf("\n");
}
void insertb(struct link *node)
{	struct link *curr;
	curr=(struct link*) malloc(sizeof(struct link));
	if(curr==NULL)
	{
		printf("out of memory\n");
		exit(0);
	}
	scanf("%d",&curr->data);
	printf("inserted\n");
	curr->next=node;
	start=curr;
}
void inserts(struct link *node)
{
	int loc;
	int i=1;
	struct link *curr,*prev;
	curr=(struct link*) malloc(sizeof(struct link));
	if(curr==NULL)
	{
		printf("out of Memory\n");
		exit(0);
	}
	else
	{
		printf("Enter the position\n");
		scanf("%d",&loc);
		printf("Enter the Value\n");
		scanf("%d",&curr->data);
		while(i<loc)
		{
			prev=node;
			node=node->next;
			i++;
		}
		prev->next=curr;
		curr->next=node;
	}
}
void inserte(struct link *node)
{
	struct link *curr;
	curr=(struct link*) malloc(sizeof(struct link));
	if(curr==NULL)
	{
		printf("Out of memory\n");
		exit(0);
	}
	printf("Enter the Data \n");
	scanf("%d",&curr->data);
	curr->next=NULL;
	while(node->next!=NULL)
	{
		node=node->next;
	}
	node->next=curr;
}
void insertn(struct link *node)
{
	int x;
	struct link *curr;
	printf("Enter the element after which you want to insert\n");
	scanf("%d",&x);
	while(node!=NULL)
	{
		if(node->data==x)
		{
			break;
		}
		else
			node=node->next;
	}
	if(node==NULL)
	{
		printf("THe ELement is NOt IN the List\n");
	}
	curr=(struct link*) malloc(sizeof(struct link));
	printf("Enter the value\n");
	scanf("%d",&curr->data);
	curr->next=node->next;
	node->next=curr;
}
void deleteb(struct link *node)
{
	struct link *temp=start;
	free(temp);
	*start=*(start->next);
}

void deletel(struct link *node)
{
	struct link *prev;
	{
		if(node->next==NULL)
		{
			start=NULL;
			free (node);
		}
		while(node->next!=NULL)
		{
			prev=node;
			node=node->next;
		}
		prev->next=NULL;
		free(node);
	}
}
void deletes(struct link *node)
{
	int loc;
	int i=1;
	struct link *prev;
	printf("Enter the loc you want to delete\n");
	scanf("%d",&loc);
	while(i<loc)
	{
		prev=node;
		node=node->next;
		i++;
	}
	prev->next=node->next;
	free(node);
}
void deleteno(struct link *node)
{
	int x;
	struct link *curr;
	printf("Enter the element you want to delete\n");
	scanf("%d",&x);
	node=start;
	while(node->next!=NULL)
	{
		if(node->data==x)
		{
			
			break;
		}
		else
		{
			curr=node;
			node=node->next;
			
		}
	}
	if(node==NULL)
	{
		printf("THe ELement is Not IN the List\n");
		return;
	}
	curr->next=node->next;
	node->next=curr;
}
