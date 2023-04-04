#define _CRT_SECURE_NO_WARNINGS 1

//typedef int TreeNodeType;
//typedef struct TreeNode 
//{
//	struct TreeNode* left;
//	struct TreeNode* right;
//	TreeNodeType val;
//}TreeNode;

//    1
// 2    3
//4 n  6 7
// 
// 
//�������
//����һ�㣬������һ��

#include "Queue.h"

void LevelOrder(TreeNode* root)
{
	QUE q;
	QueueInit(&q);
	if (root)
	{
		QueuePush(&q, root);
	}
	else
	{
		return;
	}
	while (!QueueEmpty(&q))
	{
		TreeNode* front = QueueFront(&q);
		QueuePop(&q);
		printf("%d ", front->val);
		if (front->left)
			QueuePush(&q, front->left);
		if (front->right)
			QueuePush(&q, front->right);
	}
	QueueDestroy(&q);
}



TreeNode* BuyTreeNode(TreeNodeType val)
{
	TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
	if (node == NULL)
	{
		perror("malloc");
		return NULL;
	}
	node->left = NULL;
	node->right = NULL;
	node->val = val;
	return node;
}

//ǰ�����
void PreOrder(TreeNode* p)
{
	if (p == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%d ", p->val);
	PreOrder(p->left);
	PreOrder(p->right);
}

//�������
void InOrder(TreeNode* p)
{
	if (p == NULL)
	{
		printf("NULL ");
		return;
	}
	InOrder(p->left);
	printf("%d ", p->val);
	InOrder(p->right);
}


//�������
void PostOrder(TreeNode* p)
{
	if (p == NULL)
	{
		printf("NULL ");
		return;
	}
	PostOrder(p->left);
	PostOrder(p->right);
	printf("%d ", p->val);
}


//�������ڵ����
int TreeNodeSize(TreeNode* root)
{
	if (root == NULL)
		return 0;
	return TreeNodeSize(root->left) + TreeNodeSize(root->right) + 1;
}


//����������ֵΪval�Ľڵ�
TreeNode* TreeFind(TreeNode* root, int val)
{
	if (root == NULL)
		return NULL;
	else if (root->val == val)
		return root;
	
	//������ʱ�����ķ�ʽ����TreeFind(root->left, val)�Ľ��
	TreeNode* left = TreeFind(root->left, val);
	
	if (left)
		return left;

	TreeNode* right = TreeFind(root->right, val);

	if (right)
		return right;
	
	return NULL;
}


//�����������
int TreeHeight(TreeNode* root)
{
	if (root == NULL)
		return 0;
	
	int left = TreeHeight(root->left) + 1;
	int right = TreeHeight(root->right) + 1;

	return left > right ? left : right;
}


//��������K��ڵ����
int TreeKLevelSize(TreeNode* root, int k)
{
	assert(k > 0);
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;
	return TreeKLevelSize(root->left, k - 1) + TreeKLevelSize(root->right, k - 1);
}


// ����������
void BinaryTreeDestory(TreeNode* root)
{
	if (root == NULL)
		return;
	BinaryTreeDestory(root->left);
	BinaryTreeDestory(root->right);
	free(root);
}


// �ж϶������Ƿ�����ȫ������
bool BinaryTreeComplete(TreeNode* root)
{
	QUE q;
	QueueInit(&q);
	if (root)
		QueuePush(&q, root);
	while (!QueueEmpty(&q))
	{
		TreeNode* front = QueueFront(&q);
		QueuePop(&q);
		if (front == NULL)
			break;
		else
		{
			QueuePush(&q, front->left);
			QueuePush(&q, front->right);
		}
	}

	while (!QueueEmpty(&q))
	{
		TreeNode* front = QueueFront(&q);
		QueuePop(&q);
		if (front)
		{
			QueueDestroy(&q);
			return false;
		}
	}
	QueueDestroy(&q);
	return true;
}


int main()
{
	
	TreeNode* node1 = BuyTreeNode(1);
	TreeNode* node2 = BuyTreeNode(2);
	TreeNode* node3 = BuyTreeNode(3);
	TreeNode* node4 = BuyTreeNode(4);
	TreeNode* node5 = BuyTreeNode(5);
	TreeNode* node6 = BuyTreeNode(6);
	TreeNode* node7 = BuyTreeNode(6);
	
	node1->left = node2;
	node2->left = node3;
	node1->right = node4;
	node4->right = node6;
	node4->left = node5;
	node2->right = node7;
	//PreOrder(node1);
	//putchar('\n');
	//InOrder(node1);
	//putchar('\n');
	//PostOrder(node1);
	//putchar('\n');

	//printf("%d\n", TreeNodeSize(node1));

	//printf("%d\n", TreeHeight(node1));


	//printf("%d\n", TreeKLevelSize(node1, 1));
	//printf("%d\n", TreeKLevelSize(node1, 2));
	//printf("%d\n", TreeKLevelSize(node1, 3));
	//printf("%d\n", TreeKLevelSize(node1, 4));

	/*int val = 7;
	if (TreeFind(node1, val))
	{
		printf("%d\n", TreeFind(node1, val)->val);
	}
	else
	{
		printf("NULL\n");
	}*/

	//LevelOrder(node1);
	if (BinaryTreeComplete(node1))
		printf("Yes\n");
	else
		printf("No\n");

	BinaryTreeDestory(node1);
	return 0;

}





