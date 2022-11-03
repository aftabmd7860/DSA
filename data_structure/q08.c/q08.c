// implement stack ADT q08
#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node;
	int data;
	struct node *next;
	
};
struct node* top = NULL;
void push(int value){
	struct node *newnode;     // newnode points to prev node;
	newnode = (struct node *)malloc(sizeof(struct node));  //dyanamic memory allocation
	newnode ->data =value;    //assign value 
	if(top == NULL){
	newnode->next =NULL;
		       }
else	       {
		newnode->next =top;}
		top =newnode;
		printf("node is inserted\n\n");
	              } 
int pop(){
	if (top==NULL){
	printf("stack is full\n");
	}
	else {
		struct node *t = top;
		int t_data= top-> data;
		top = top-> next;
		free(t);
		return (t_data);
	}
}
void display(){
if (top==NULL){
	printf("stack is underflow\n");}
else
{
	printf("stack is ::/n");
	struct node *t=top;
	while(t->next !=NULL){
	printf("%d--->",t->data);
	t=t->next;
}
	printf("%d--->NULL\n\n",t->data);
	}
		}
int main(){
	int choice ,value;
	printf("implement of stack using linked lis\n");
	while(1){
	printf("1.push\n2.pop\n3.display\n4.exit\n");
	printf("\n enter your choice::");
	scanf("%d",&choice);
	switch(choice){
	case 1:printf("\nenter the value to insert: ");
	       scanf("%d",&value);
	       push(value);
	       break;
	case 2:printf("popped element is::%d\n",pop());
		break;
	case 3: display();
	 	break;
	case 4:
		exit(0);
		break;
	default:
		printf("wrong choice\n");	

			}	

		}		

	}	

