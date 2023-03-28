#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int TreeNodeType;
typedef struct TreeNode 
{
	struct TreeNode* left;
	struct TreeNode* right;
	TreeNodeType val;
}TreeNode;


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

//前序遍历
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

//中序遍历
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


//后序遍历
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


//二叉树节点个数
int TreeNodeSize(TreeNode* root)
{
	if (root == NULL)
		return 0;
	return TreeNodeSize(root->left) + TreeNodeSize(root->right) + 1;
}


//二叉树叶子节点个数

//二叉树的深度
int TreeHeight(TreeNode* root)
{
	if (root == NULL)
		return 0;
	
	int left = TreeHeight(root->left) + 1;
	int right = TreeHeight(root->right) + 1;

	return left > right ? left : right;
}


//二叉树第K层节点个数
int TreeKLevelSize(TreeNode* root, int k)
{
	assert(k > 0);
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;
	return TreeKLevelSize(root->left, k - 1) + TreeKLevelSize(root->right, k - 1);
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
	node5->right = node7;
	//PreOrder(node1);
	//putchar('\n');
	//InOrder(node1);
	//putchar('\n');
	//PostOrder(node1);
	//putchar('\n');

	//printf("%d\n", TreeNodeSize(node1));

	//printf("%d\n", TreeHeight(node1));
	printf("%d\n", TreeKLevelSize(node1, 1));
	printf("%d\n", TreeKLevelSize(node1, 2));
	printf("%d\n", TreeKLevelSize(node1, 3));
	printf("%d\n", TreeKLevelSize(node1, 4));

	
	return 0;
}