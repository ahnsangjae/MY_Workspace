#include "Tree.h"

void main()
{
	char command;
	element e;
	TreeNode *root = NULL;
	TreeNode *tmp;

	do {
		help();		// 선택할 메뉴 출력
		command = getchar();
		while (getchar() != '\n');
		
		switch (command) {
		case 'i':
			printf("단어:");
			gets_s(e.word, sizeof(e.word));
			printf("의미:");
			gets_s(e.meaning, sizeof(e.meaning));
			insert_node(&root, e);
			break;
		case 'd':
			printf("단어:");
			gets_s(e.word, sizeof(e.word));
			delete_node(&root, e);
			break;
		case 'p':
			display(root);
			printf("\n");
			break;
		case 's':
			printf("단어:");
			gets_s(e.word, sizeof(e.word));
			tmp = search(root, e);

			if (tmp != NULL)
				printf("의미:%s\n", tmp->key.meaning);
			break;
		}
	} while (command != 'q');
}