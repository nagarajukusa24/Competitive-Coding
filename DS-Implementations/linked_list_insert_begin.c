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
    head -> next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third-> next = NULL;

    while (head->next!=NULL)
	{
		/* code */
		printf("%d",head->data);
		head=head->next;
	}
	printf("%d",head->data);

    return 0;
}