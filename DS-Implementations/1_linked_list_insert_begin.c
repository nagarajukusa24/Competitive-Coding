#include<stdio.h>
#include<stdlib.h>

struct  Node
{
    /* data */
    int data;
    struct Node * next;
};

int main(){

    struct Node * head = NULL;
    struct Node * first = NULL;
    struct Node * second = NULL;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));

    head -> data = 1;
    head -> next =first;

    first->data = 2;
    first->next = second;

    second->data = 3;
    second-> next = NULL;

    struct Node * newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = 4;
    newnode->next=head;
    head=newnode;

    while (head->next!=NULL)
	{
		/* code */
		printf("%d",head->data);
		head=head->next;
	}
	printf("%d",head->data);

    return 0;
}