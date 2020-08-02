//WAP TO IMPLEMENT SINGLE LINK LIST
//SAI KUMAR SATAPATHY
//CSE
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct link
{
	int data;
	struct link*next;
};
void createl(struct link*);
void display(struct link*);
main()
{
	struct link*node;
	node=(struct link*) malloc(sizeof(struct link));
	if(node== '\0')
	{
		printf("out of memory\n");
		exit(0);
	}
	//printf("Enter the data\n");
	//node->next ='\0';
	createl(node);
	display(node);
}
void createl(struct link*node)
{
	char ch;
	printf("enter the data\n");
	scanf("%d",&node->data);
	node->next='\0';
	printf("Enter n to exit elseany key to continue\n");
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
void display(struct link*node)
{
	while(node!=NULL)
	{
		printf("%d\t",node->data);
		node=node->next;
	}
	printf("\n");
}

