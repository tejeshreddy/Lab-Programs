#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *llink;
	struct node *rlink;
};

typedef struct node node;
node *getnode()
{
	int x;
	printf("Enter the data(-1 to exit):\n");
	scanf("%d",&x);

	if(x==-1)
		return NULL;
	
	node *ptr;
	ptr=(node*)malloc(sizeof(int(node)));
	printf("\n");


}