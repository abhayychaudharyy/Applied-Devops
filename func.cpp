//program of stack with LL using functions
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	node *p;
};
struct node *push(struct node *top)
{
	
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter data");
	scanf("%d",&temp->data);
	temp->p=NULL;
	temp->p=top;
	top=temp;
	return top;
}
struct node *pop (struct node *top)
{
	struct node *temp;
	temp=top;
	printf("the item deleted= %d",top->data);
	temp=temp->p;
	free(top);
	top=temp;
	return top;
}
void show(struct node *t)
{
	if(t!=NULL)
	{
		printf("%d ",t->data);
		show(t->p);
	}
}
int main()
{
	struct node *top=NULL;
	int outer=1;
	while(outer==1)
	{
		int ch;
		printf("1:PUSH 2:POP 3:PRINT");
		printf("\nINPUT: ");
		scanf("%d",&ch);
		if(ch==1)
		{
			int x=1;
			top=push(top);
			while(x==1)
			{
				int ch1;
				printf("1 for another entry and 2 to stop");
				scanf("%d",&ch1);
				if(ch1==1)
				{
					top=push(top);
				}
				else
				{
					x=0;
				/*struct node *t;
				t=top;
				show(t);*/
				}
			}
		}
		else if(ch==2)
		{
			top=pop(top);
			int x=1;
			while(x==1)
			{
				int ch2;
				printf("1 to pop again 2 to stop");
				scanf("%d",&ch2);
				if(ch2==1)
				{
					top=pop(top);
				}
			}
		}
		else if(ch==3)
		{
			struct node *t;
			t=top;
			show(t);
		}
		else
		{
			printf("INVALID INPUT");
		}
	int hey;
	printf("\nPRESS1: Main Menu Press2: Exit");
	scanf("%d",&hey);
	if(hey==1)
	{
		outer=1;
	}
	else
	{
		outer=0;
	}
	}
	return 0;
}
