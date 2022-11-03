// implementation of queue using linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
	struct node * front;
	struct node * rear;

void insert (struct node *ptr,int item){
ptr = (struct node*)malloc(sizeof(struct node));
if (ptr == NULL){
	printf("\n overflow");
	return;
}
else {
	ptr -> data =item;
	if (front ==  NULL){
		front =ptr;
		rear =ptr;
		front -> next=NULL;
		rear -> next=NULL;
	}
	else {
		rear ->next =ptr;
		rear =ptr;
		rear ->next =NULL;
	}

		}
}
void deletenode(struct node *ptr){
	if(front == NULL){
	printf("underflow");
	return ;
	}
	else	{
	ptr = front;
	front =front ->next;
	free (ptr);
	}	
}



int main ()
{
struct node *head =NULL;
insert (head,10);
insert(head ,20);
printf("front element : %d\n",front->data);
deletenode(head);
printf("front element :%d",front->data);
return 0;

}
