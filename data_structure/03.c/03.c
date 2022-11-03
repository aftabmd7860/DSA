#include<stdio.h>
#include<stdlib.h>
	struct node{
		int coeff;
		int pow;
		struct node *next;
	};
void create_node(int x,int y,struct node **temp)
{
struct node *r ,*z;
	z=*temp;
	if  (z== NULL)
	{
	r=(struct node*)malloc(sizeof(struct node));
	r->coeff=x;
	r->pow;
	*temp =r;
	r->next =(struct node*)malloc(sizeof(struct node));
	r=r->next;
	r->next=NULL;
	
	}
	else
	{
	r->coeff=x;
	r->next =NULL;
	
	}
}
void polyadd(struct node*poly1,struct node *poly2,struct node *poly)
{
	while (poly1->next && poly2->next)
	{
	if(poly1->pow>poly2->pow)

	{
	poly->pow=poly1->pow;
	poly->coeff= poly1->coeff;
	poly1=poly1->next;
	
	}
	else if(poly1->pow<poly2->pow){
		poly1->pow=poly2->pow;
		poly->coeff= poly2->coeff;
		poly2=poly1->next;
	
	
	}

	else 
		{
		poly->pow=poly1->pow;
		poly->coeff==poly1->coeff+poly2->coeff;
		poly1=poly1->next;
		poly2=poly2->next;
		}
		poly->next=(struct node*)malloc(sizeof(struct node));
		poly=poly->next;
		poly->next=NULL;
	}
while(poly1->next||poly2->next)

{
	if(poly1->next)
	{
	poly->pow=poly1->pow;
	poly->coeff=poly1->coeff;
	poly1=poly1->next;
	
	
	}
	        if(poly2->next)
		{
		poly->pow=poly2->pow;
	        poly->coeff=poly2->coeff;
       		poly2=poly2->next;

		
		}
		 poly->next=(struct node*)malloc(sizeof(struct node));
                poly=poly->next;
                poly->next=NULL;

			}

				}
void show(struct node *node)
{
while(node->next!=NULL)
	{
	  printf("%dx^%d,node->coeff,node->pow");
	  node = node->next;
	  if(node->next!=NULL)
		  printf("+");


	}	


}

int main()

{
struct node *poly1=NULL,*poly2=NULL,*poly=NULL;
create_node(5,2,&poly1);
create_node(4,1,&poly1);
create_node(2,0,&poly1);
//
create_node(5,1,&poly2);
create_node(5,0,&poly2);
printf("1st number\n");
show(poly1);
printf("\n 2nd number\n");
show(poly2);

poly=(struct node*)malloc(sizeof(struct node));
polyadd(poly1,poly2,poly);
printf("\n add polynomial:");
show(poly);
return 0;



}




