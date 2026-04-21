#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*top=NULL;
void push()
{
	int item;
	struct node*newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	if(newNode==NULL)
	{
		printf("Heap Overflow!\n");
		return;
	}
	printf("Enter element to push:");
	scanf("%d",&item);
	newNode->data=item;
	newNode->next=top;
	top=newNode;
	printf("Element pushed successfully.\n");
}
void pop()
{
	struct node*temp; 
	if(top==NULL)
	{
		printf("Stack Undeflow!\n");
		return;
	}
	temp=top;
	printf("Popped element:%d\n",temp->data);
	top=temp->next;
	free(temp);
}
void display()
{
	struct node*temp;
	if(top==NULL)
	{
		printf("Stack is empty.\n");
		return;
	}
	printf("Stack elements:\n");
	temp=top;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
int main()
{
	int choice;
	do
	{
		printf("\n---Stack Menu---\n");
		printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case1:
				push();
				break;
			case2:
				pop();
				break;
			case3:
				display();
				break;
			case4:
				printf("Exiting program.\n");
				break;
			default:
				printf("Invalid choice!\n");
		}
	}while(choice!=4);
	return 0;
}
