#include<stdio.h>
#define max_size=10
int ary[max_size],top=-1;
void push( int item)
{
	if(top>=max_size)
	{
		printf("Stack is full");
	}
	else
	{
		top=top+1;
		ary[top]=item;
	}
}
void pop(int item)
{
	f(top<-1)
	{
		printf("Stack is empty");
	}
	else
	{
		
		item=ary[top];
		top=top+1;
	}
}
void display()
{

}
int main()
{ 
	int ary[10],n,item;
	while(true)
	{
	printf("Enter your choice");
	scanf("%d",&n);
	printf("1.Push");
	printf("1.pop");
	printf("1.display");
	}
	if(n==1)
	push(item);
	else if(n==2)
	pop(item);
	else(n==3);
	display();
	return(0);
}

