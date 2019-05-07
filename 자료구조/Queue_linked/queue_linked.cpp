#if 1

#include "queue_linked.h"

void main()
{
	int i;
	init_queue();

	printf("Put 5, 4, 7, 8, 2, 1");
	put(5);
	put(4);
	put(7);
	put(8);
	put(2);
	put(1);
	print_queue();

	printf("\n\nGet");
	i = get();
	print_queue();
	printf("\ngetting value is %d", i);

	printf("\n\nPut 3, 2, 5, 7");
	put(3);
	put(2);
	put(5);
	put(7);
	print_queue();

	printf("\n\nPut 3");
	put(3);
	print_queue();

	printf("\n\nInitialize queue");
	clear_queue();
	print_queue();

	printf("\n\nNow queue is empty, get");
	i = get();
	print_queue();
	printf("\n\ngetting value is %d\n", i);

	system("pause");
}

#endif