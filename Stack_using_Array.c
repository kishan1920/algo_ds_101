#include<stdio.h>
#include<conio.h>

#define SIZE 100

int stack[SIZE];
int top = -1;

void push(int data);
int  pop();
void display();

void main()
{
    int ch, data;
    clrscr();
    while(1)
    {

	printf("1. Push\n");
	printf("2. Pop\n");
	printf("3. display\n");
	printf("4. Exit\n");

	printf("Enter your choice: ");

	scanf("%d", &ch);

	switch(ch)
	{
	    case 1:
		printf("Enter data to push into stack: ");
		scanf("%d", &data);
		push(data);
		break;

	    case 2:
		data = pop();
		    printf("poped element %d\n", data);
		break;
	    case 3:
		display();
		break;
	    case 4:
		exit(0);
		break;

	    default:
		printf("Enter valid choice\n");
	}

	printf("\n\n");
    }

}
void push(int data)
{

    if (top >= SIZE)
	printf("Overflow\n");
    else
    {
	top++;
	stack[top] = data;
	printf("Data pushed to stack.\n");
    }
}

int pop()
{

    if (top < 0)
    {
	printf("Stack is empty.\n");
	return 0;
    }
    else
	return stack[top--];
}
void display()
{
  int i;
  if(top < 0)
  {
    printf("Stack is empty\n");
  }
  else
  {
    for(i=top;i>=0;i--)
    {
      printf("%d\n",stack[i]);
    }
  }
}
