#include "Tree.h"

void main()
{
	char command;
	element e;
	TreeNode *root = NULL;
	TreeNode *tmp;

	do {
		help();		// ������ �޴� ���
		command = getchar();
		while (getchar() != '\n');
		
		switch (command) {
		case 'i':
			printf("�ܾ�:");
			gets_s(e.word, sizeof(e.word));
			printf("�ǹ�:");
			gets_s(e.meaning, sizeof(e.meaning));
			insert_node(&root, e);
			break;
		case 'd':
			printf("�ܾ�:");
			gets_s(e.word, sizeof(e.word));
			delete_node(&root, e);
			break;
		case 'p':
			display(root);
			printf("\n");
			break;
		case 's':
			printf("�ܾ�:");
			gets_s(e.word, sizeof(e.word));
			tmp = search(root, e);

			if (tmp != NULL)
				printf("�ǹ�:%s\n", tmp->key.meaning);
			break;
		}
	} while (command != 'q');
}