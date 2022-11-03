#include<stdio.h>

void bubble_sort(int a[],int n);

int main()
{
	int a[]={2,67,1,45,4,55,3,5};
	int i;
	printf("Before:\n");
	for (i=0;i<=7;i++){
		printf("%d,",a[i]);
	}
	bubble_sort(a,8);
	printf("\nAfter:\n");
	for (i=0;i<=7;i++){
		printf("%d, ",a[i]);
	}
	return 0;
}
void bubble_sort(int a[],int n)
{
	int r,i,temp;
	for (r=1;r<=n-1;r++) //r=round
	{
		for (i=0;i<=n-1-r;i++)
		{
			if (a[i]>a[i+1])
			{ 
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;	
			}
				
		}
	}
}
