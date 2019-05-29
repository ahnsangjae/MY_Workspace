#include "Tree.h"

int compare(element e1, element e2)
{
	return strcmp(e1.word, e2.word);
}

void display(TreeNode *p)
{
	/* 채우기 */
}

TreeNode *search(TreeNode *root, element key)
{
	TreeNode *p = root;

	while (p != NULL)
	{
		/* 채우기 */
	}
	return p;
}

void insert_node(TreeNode **root, element key)
{
	TreeNode *p, *t;
	TreeNode *n;

	/* 채우기 */

}

void delete_node(TreeNode **root, element key)
{
	TreeNode *p, *child, *succ, *succ_p, *t;

	/* 채우기 
1) 단말 노드인 경우
2) 하나의 자식만 가지는 경우
3) 두 개의 자식을 가지는 경우
*/

}

void help()
{
	printf("**************\n");
	printf("i: 입력\n");
	printf("d: 삭제\n");
	printf("s: 탐색\n");
	printf("p: 출력\n");
	printf("q: 종료\n");
	printf("**************\n");
}