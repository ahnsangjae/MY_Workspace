#include "Tree.h"

int compare(element e1, element e2)
{
	return strcmp(e1.word, e2.word);
}

void display(TreeNode *p)
{
	/* ä��� */
}

TreeNode *search(TreeNode *root, element key)
{
	TreeNode *p = root;

	while (p != NULL)
	{
		/* ä��� */
	}
	return p;
}

void insert_node(TreeNode **root, element key)
{
	TreeNode *p, *t;
	TreeNode *n;

	/* ä��� */

}

void delete_node(TreeNode **root, element key)
{
	TreeNode *p, *child, *succ, *succ_p, *t;

	/* ä��� 
1) �ܸ� ����� ���
2) �ϳ��� �ڽĸ� ������ ���
3) �� ���� �ڽ��� ������ ���
*/

}

void help()
{
	printf("**************\n");
	printf("i: �Է�\n");
	printf("d: ����\n");
	printf("s: Ž��\n");
	printf("p: ���\n");
	printf("q: ����\n");
	printf("**************\n");
}