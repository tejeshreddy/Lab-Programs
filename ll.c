#include<stdio.h>
#include<stdlib.h>
void display();
void insertfront();
void insertend();
void deletefront();
void deleteend();
void impst();
void impq();
struct node
{
	int sem;
	char name[20],usn[10],phno[10],branch[10];
	struct node*link;
};
typedef struct node NODE;
NODE *first=NULL;
void main()
{
 	int N,i,ch;
	for(;;)
	{
		printf("the choices are : 1.create 2.display 3.insertfront 4.insertend 5.deletefront 6.deleteend 7.stack 8.queue 9.exit\n");
	printf("enter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("enter the no of students\n");
			scanf("%d",&N);
			for(i=0;i<N;i++)
			{
				insertfront();
			}
			break;
		case 2 : display();break;
		case 3: insertfront();break;
		case 4 :insertend();break;
		case 5 :deletefront();break;
		case 6 :deleteend();break;
		case 7 :impst();break;
		case 8 : impq();break;
		case 9 :exit(0);break;
	}
	}
}
NODE *getnode()
{
	NODE *ptr;
	ptr=(NODE*)malloc(sizeof(NODE));
	printf("enter the name,usn,branch,phno,sem\n");
	scanf("%s%s%s%s%d",ptr->name,ptr->usn,ptr->branch,ptr->phno,&ptr->sem);
	ptr->link=NULL;
	return ptr;
}
void insertfront()
{
	NODE *p;
	p=getnode();
	if(first==NULL)
	{
		first=p;
	}
	else
	{
		p->link=first;
		first=p;
	}
}
void deletefront()
{
	NODE *t;
	if(first==NULL)
	{
		printf("the list is empty\n");
	}
	else
	{
		t=first;
		first=first->link;
		free(t);
	}
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
void deleteend()
{
	NODE *temp,*t;
	if(first==NULL)
	printf("list is empty\n");
	else
	{
		temp=first;
		t=NULL;
		while(temp->link!=NULL)
		{
			t=temp;
			temp=temp->link;
		}
		if(t==NULL)
		first=NULL;
		else
		t->link=NULL;
		free(temp);
	}
}
void display()
{
	NODE *temp;
	int c=0;
	if(first==NULL)
	printf("\n list is empty");
 	else
	{
		temp=first;
		while(temp!=NULL)
		{
			printf("student:%s\nusn:%s\nbranch:%s\nphno:%s\nsem:%d\n",temp->name,temp->usn,temp->branch,temp->phno,temp->sem);
		temp=temp->link;
		c++;
		}
	}
	printf("total no of nodes %d\n",c);
}
void impst()
{
	int ch1;
	for(;;)
	{
	printf("choices are : 1.push\t2.pop\t3.display\t4.exit\n");
	printf("enter your choice\n");
	scanf("%d",&ch1);
	switch(ch1)
	{
		case 1:insertfront();break;
		case 2:deletefront();break;
		case 3:display();break;
		case 4:exit(0);
	}
	}
}
void impq()
{
	int ch2;
	for(;;)
	{
	printf("choices are:1.enqueue\t2.dequeue\t3.display\t4.exit\n");
	printf("\nenter ur choice :");
	scanf("%d",&ch2);
	switch(ch2)
	{
		case 1:insertend();break;
		case 2:deletefront();break;
		case 3:display();break;
		case 4:exit(0);break;
	}
	}
} 