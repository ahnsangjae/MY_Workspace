#if 1

#include "stack_linked.h"

int main()
{
	int i;
	init_stack();

	printf("Push 5, 4, 7, 8, 2, 1");
	push(5);
	push(4);
	push(7);
	push(8);
	push(2);
	push(1);
	print_stack();

	printf("\n\nPop");
	i = pop();
	print_stack();
	printf("\n popping value is %d", i);

	printf("\n\nPush 3, 2, 5, 7, 2");
	push(3);
	push(2);
	push(5);
	push(7);
	push(2);
	print_stack();

	printf("\n\nPush 3");
	push(3);
	print_stack();

	printf("\n\nInitialize stack");
	clear_stack();
	print_stack();

	printf("\n\nNow stack is empty, pop");
	i = pop();
	print_stack();
	printf("\n popping value is %d\n", i);

	system("pause");
	return 0;
}

#endif