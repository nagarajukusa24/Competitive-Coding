//https://www.geeksforgeeks.org/linked-list-set-1-introduction/

#include<stdio.h>
#include<stdlib.h>
// #include<malloc.h>
struct  Node
{
	int data;
	struct Node * next;
};

int main(){
  //  struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 

	struct Node * head = NULL;
	struct Node * second = NULL;
	struct Node * third = NULL;

	head = (struct Node *)malloc(sizeof(struct Node));
	second = (struct Node *)malloc(sizeof(struct Node));
	third = (struct Node *)malloc(sizeof(struct Node));

	head->data=1;
	head->next=second;

	second->data=2;
	second->next=third;

	third->data=3;
	third->next=NULL;

	while (head->next!=NULL)
	{
		/* code */
		printf("%d",head->data);
		head=head->next;
	}
	printf("%d",head->data);
	return 0;
}