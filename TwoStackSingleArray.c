#include <stdio.h>
#define SIZE 10


int ar[SIZE];
int top1 = -1;
int top2 = SIZE;

//Functions to push data
void push_stack1 (int data)
{
	if (top1 < top2 - 1)
	{
		ar[++top1] = data;
	}
	else
	{
		printf ("Stack Full!\n");
	}
}
void push_stack2 (int data)
{
	if (top1 < top2 - 1)
	{
		ar[--top2] = data;
	}
	else
	{
		printf ("Stack Full!\n");
	}
}

//Functions to pop data
void pop_stack1 ()
{
	if (top1 >= 0)
	{
		int popped_value = ar[top1--];
		printf ("%d is being popped from Stack 1\n", popped_value);
	}
	else
	{
		printf ("Stack Empty!\n");
	}
}
void pop_stack2 ()
{
	if (top2 <= SIZE)
	{
		int popped_value = ar[top2++];
		printf ("%d is being popped from Stack 2\n", popped_value);
	}
	else
	{
		printf ("Stack Empty!\n");
	}
}

void print_stack1 ()
{
	int i;
	for (i = 0; i <= top1; ++i)
	{
		printf ("%d ", ar[i]);
	}
	printf ("\n");
}
void print_stack2 ()
{
	int i;
	for (i = top2; i >= 0; --i)
	{
		printf ("%d ", ar[i]);
	}
	printf ("\n");
}
int main()
{
	int ar[SIZE];

	printf ("We can push a total of 10 values\n");
	
	//Number of elements pushed in stack 1 is 6
	//Number of elements pushed in stack 2 is 4
	push_stack1 (1);
	push_stack1 (2);
	push_stack1 (3);
	push_stack2 (4);
	push_stack1 (5);
	push_stack2 (6);
	push_stack1 (7);
	push_stack2 (8);
	push_stack1 (9);
	push_stack2 (10);
	
	print_stack1 ();
	print_stack2 ();
	//Pushing on Stack Full
	push_stack1 (11);
	
	return 0;
}

