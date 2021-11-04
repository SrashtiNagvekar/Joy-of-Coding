#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
int top=-1;
void push();
void pop();
void display();
struct book 
{
	int bookid;
	char bookname[20];
	char authname[20];
	float bookprice;
} ;
struct book a[5];
void main()
{
	int choice;
	for(;;)
	{
		printf("1.Push\t2.Pop\t3.Display\t4.Exit\n");
		printf("Enter your choice\n");
		scanf("%d\n",&choice);
		switch(choice)
		{
		case 1: push();
			break;
		/*case 2: pop();
			break; */
		case 3: display();
			break;
		case 4: exit(0);
		}
	}

}
void push()
{
	if(top==5)
	{
		printf("Can't insert, Stack is full");
		return;
	}
	++top;
	printf("Enter the bookid,bookname,authname and price");
	scanf("%d%s%s%f",&(a[top].bookid),(a[top].bookname),(a[top].authname),&(a[top].bookprice));

}
void display()
{
	int i;
	if(top==-1)
	{
		printf("No contents to display\n");
		return;
	}
	else
	{
		for(i=top;i>=0;i--)
		{
		printf("book details are:\n");
		printf("%d %s %s %f\n",a[i].bookid,a[i].bookname,a[i].authname,a[i].bookprice);
		}
	}
}
void pop()
{
	if(top==-1)
	{
		printf("No books\n");
		return;
	}
	else
	{
		--top;
	}
}
