#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};

typedef struct node node;

node *last=NULL;

node *getnode()
{
	node *ptr;
	ptr=(node*)malloc(sizeof(int(node)));
	printf("Enter the data: ");
	scanf("%d",&ptr->data);
	ptr->link=NULL;
}

void insertend()
{
	node *p;
	p=getnode();
	p->link=last;
	last=p;
}


void display()
{
	node *temp;
	temp=last;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->link;
	}
}

void main()
{
	int n,i;
	printf("Enter the number of digits: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
		insertend();
	display();
}
