#include<stdio.h>
#include<stdlib.h>
struct node
{
struct node *prev;
	int data;
struct node *next;	
};

struct node* addtoempty(struct node* head,int data)
{
struct node* temp=(struct node*)malloc(sizeof(struct node));
temp->prev=NULL;
temp->data=data;
temp->next=NULL;
head=temp;
	return head;
}
struct node* addatend(struct node* head,int data)
{
struct node* temp,*tp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->prev=NULL;
	temp->data=data;
	temp->next=NULL;
	tp=head;

	while(tp->next!=NULL){
		tp=tp->next;
		tp->prev=tp;}
		return(head);
		}
void print(struct node* head)
{
	struct node* ptr =head;
	while(ptr!=NULL)	
	{
	printf("%d" , ptr->data);
	ptr=ptr->next;
	
	}
		printf("\n");		}


struct node* reverse(struct node* head)
{
	head=addatend(head,45);
		{
		struct node* ptr1=head;
		struct node* ptr2=ptr1->next;
		ptr1-> next=NULL;
		ptr1-> prev=NULL;
			while(ptr2!=NULL)
			{
			ptr1->prev=ptr2->next;
			ptr2->next=ptr1;
			ptr1=ptr2;
			ptr2=ptr1->prev;
			
			}
			head = ptr1;
			return head;
		}
}

int main()	{
		struct node* head=NULL;
		struct node* ptr;
		head=addtoempty(head,50);
		head=addatend(head,60);
		head=addatend(head,40);
		printf("befor reversing\n");
		print (head);
		head=reverse(head);
		printf("aftre reverse\n");
		print(head);
		return 0;

}




























