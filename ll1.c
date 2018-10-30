#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};
typedef struct node node;
node *first=NULL;

node *getnode()
{
	node *ptr;
	ptr=(node*)malloc(sizeof(int(node)));
	printf("Enter data: ");
	scanf("%d",&ptr->data);
	ptr->link=NULL;
}

void insert()
{
	node *p,*temp;
	p=getnode();
	if(first==NULL)
		first=p;
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
	node *temp;
	temp=first;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->link;
	}
}

void insertatn()
{
	node *temp,*c,*p;
	int co,cp=1;
	printf("Enter the place:");
	scanf("%d",&co);
	p=getnode();
	temp=first;
	c=first->link;

	while(c!=NULL)
	{
		if(co==cp)
		{
			temp->link=p;
			p->link=c;
			break;
		}
		temp=temp->link;
		c=c->link;
		cp++;
	}
}

void main()
{
	int n,i;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		insert();
	display();
	insertatn();
	display();

}