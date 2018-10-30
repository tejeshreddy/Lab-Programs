#include<stdio.h>
#include<stdlib.h>
void display();
void insertend();

struct node
{
	int data;
	struct node*link;
};

typedef struct node NODE;
NODE *first=NULL;

void main()
{
	int n,i;
	printf("Enter the number of numbers: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		insertend();
	}
	display();
}

NODE *getnode()
{
	NODE *ptr;
	ptr=(NODE*)malloc(sizeof(NODE));
	//printf("enter \n");
	scanf("%d",&ptr->data);
	ptr->link=NULL;
	return ptr;
}

void insertend()
{
	NODE *p,*temp;
	p=getnode();
	if(first==NULL)
	{
		first=p;
	}
	else
	{
		temp=first;
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		temp->link=p;
	}
}

void display()
{
	NODE *temp;
	temp=first;
	do
	{
		printf("%d\n",temp->data);	
		temp=temp->link;	
	}while(temp!=NULL);
}