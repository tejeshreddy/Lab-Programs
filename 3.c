#include<stdio.h>
#include<stdlib.h>
void display();
void delete();

struct node
{
	int data;
	struct node *link;
};

typedef struct node NODE;
NODE *first=NULL;

NODE *getnode()
{
	NODE *ptr;
	ptr=(NODE*)malloc(sizeof(NODE));
	scanf("%d",&ptr->data);
	ptr->link=NULL;
}

void delete(int del)
{
	NODE *curr,*temp;int i=0;
	temp=first;
	/*temp=curr->link;*/
	while(temp->link!=NULL)
	{
		i++;
		if(temp->data==del)
		{
			/*curr->link=temp->link;
			break;*/
			printf("found at position: %d\n",i);
		}
		
		temp=temp->link;
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

void main()
{
	int n,i,del;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		getnode();
	}	
	/*vo*/
	//delete(del);
	display();
}
