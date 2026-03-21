#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push()
{
	int item;
	if(top==MAX-1)
	{
		printf("Stack Overflow!\n"); 
		return;
	}
	printf("Enter element to push:");
	scanf("%d",&item);
	stack[++top]=item;
	printf("Element pushed successfully.\n");
}
void pop()
{
	if(top==-1)
	{
		printf("Stack Underflow!\n");
		return;
	}
	printf("Popped element:%d\n",stack[top--]);
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("Stack is empty.\n");
		return;
	}
	printf("Stack elements:\n");
	for(i=top;i>=0;i--)
	printf("%d\n",stack[i]);
}
int main()
{
	int choice;
	do
	{
		printf("\n---Stack Menu---\n");
		printf("1.push\n2.pop\n3.Display\n4.Exit\n");
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
			    printf("Exiting program\n");
			    break;
			default:
			     printf("Invalid choice!\n");	
		}
	}while(choice!=4);
	return 0;
}
