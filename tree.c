#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *llink;
	struct node *rlink;
};

typedef struct node node;
node *getnode()
{
	node *ptr;
	int x;
	printf("Enter the data(-1 to exit): \n");
	scanf("%d",&x);
	if(x==-1)
		return NULL;
	
	ptr=(node*)malloc(sizeof(int(node)));
	ptr->data=x;

	printf("Enter the left child of %d :\n",x);
	ptr->llink=getnode();

	printf("Enter the right child of %d: \n",x);
	ptr->rlink=getnode();

	return ptr;
}

/*void treecreation()
{
	node *p;
	p=getnode();
	printf("");
}*/

void preorder(node *n)
{
	if(n!=NULL)
	{
	preorder(n->llink);
	printf("%d ",n->data);
	preorder(n->rlink);
	}
}

int main()
{
	node *root;
	root=getnode();
	printf("Pre oreder traversal of the tree is:\n");
	preorder(root);
}