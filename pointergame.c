#include<stdio.h>
#include<stdlib.h>
void main()
{
	int p=5;
	
	int *r;
	r=&p;
	printf("%d\n",*r );
	int **q;
	q=&r;
	printf("%d\n",**q);
}