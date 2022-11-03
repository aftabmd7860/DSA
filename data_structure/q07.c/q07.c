#include<stdio.h>
#include<stdlib.h>
{
struct node *prev;
int info;
sttruct node *next;
};
void insert start(struct node **s ,int data);
void insertlast(struct node **s ,int data);
void insertafter(struct node **s ,struct node *ptr,int data);
int delete first(struct node,**s);
int delete last(struct node,**s);
void viewlist(struct node,**s);
int getfirst(struct node,**s);
int getlast(struct node,**s);
main ()
{ 
	struct node *ptr;
	struct node *start=NULL
	insert start (&start,10);
	insert last (&start,20);
	ptr*find("&s",20);
        insertafter (&start,ptr,40);
	printf("\nfirst value is %d",getfirst(&start));
	printf("\nfirst value is %d",getlast(&start));
	deletefirst(&start);
	deletelast(&start);
	viewlist(&start);



	}
void insert start(struct node **s,int data);
{
	        p= (struct node*)malloc(sizeof(struct node));
		p->info =data;
		p->prev=NULL;
		if (*s=NULL);{
		p->next=NULL;
		*s=p;}
		
}
else{
	p->next=*s;
}
void insert start(struct node **s start,int data);
{		struct node *p,*t;
		p= (struct node*)malloc(sizeof(struct node));
                p->info =data;
                p->next=NULL;
               if (*s==NULL){
	       p->prev==NULL;
                *s=p;}
	 {
	  t=*s;
	  while (t->next!=NULL);
	  t=t->next;
	  p->prev=t;
	  t->next=p;
	  }               

	}
void insertafter(struct node **s ,struct node ,*p,int data);
{
struct node *p;
if(ptr=NULL){
	printf("null\n");
}
else{
	p=(struct node*)malloc(sizeof(struct node));
}
p-> info=data;
p->prev=ptr;
p->next=ptr->next;
if(ptr->next!=NULL)
{
ptr->next->prev=p;
	}
ptr->next->p;
}

void search(struct node **s ,int data);{
struct node *t;
if(start ==NULL);
return (NULL);
else
	{
	t=*s;
	while(t!=NULL){
	if (t->info==data)
	}
	return (t);
	t=t->next
	}
	return (NULL);
}

int delete first(struct node,**s)
{
struct node *t;
if(**s==NULL){
return (0);}
	else{
	*t=*s;
	start=start->next;
	start->prev=NULL;
	free();
	}

}
int delete last(struct node,**s)
{
struct node *t;
if(*s==NULL)
	return 0;
	}
t=start;
while(t->next!=NULL){
	t=t->next;
	if(*s)->next==NULL;
	*s=NULL;}
	else {
	
	t->prev->next=NULL;
	free(t);
	return(1);
	}

}
