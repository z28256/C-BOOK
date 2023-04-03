#define _CRT_SECURE_NO_WARNINGS 1

#include <stdbool.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};


//如果二叉树每个节点都具有相同的值，那么该二叉树就是单值二叉树。

bool isUnivalTree(struct TreeNode* root)
{
    if (root == NULL)
        return true;

    if (root->left && root->val != root->left->val)
        return false;

    if (root->right && root->val != root->right->val)
        return false;
    
    return isUnivalTree(root->right) && isUnivalTree(root->left);
}


//给你两棵二叉树的根节点 p 和 q ，编写一个函数来检验这两棵树是否相同。

bool isSameTree(struct TreeNode* p, struct TreeNode* q)
{
    if (p == NULL && q == NULL)
        return true;
    else if (p == NULL || q == NULL)
        return false;
    else if (p->val != q->val)
        return false;
    else
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}


//对称二叉树

bool isSameTree2(struct TreeNode* p, struct TreeNode* q)
{
    if (p == NULL && q == NULL)
        return true;
    else if (p == NULL || q == NULL)
        return false;
    else if (p->val != q->val)
        return false;
    else
        return isSameTree2(p->left, q->right) && isSameTree2(p->right, q->left);
}

bool isSymmetric(struct TreeNode* root)
{
    if (root == NULL)
        return true;
    else
        return isSameTree2(root->left, root->right);
}


//二叉树的前序遍历

//1.递归
void preorder(struct TreeNode* root, int* res, int* resSize)
{
    if (root == NULL)
        return;
    res[(*resSize)++] = root->val;
    preorder(root->left, res, resSize);
    preorder(root->right, res, resSize);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize)
{
    int* res = (int*)malloc(sizeof(int) * 2000);
    *returnSize = 0;
    preorder(root, res, returnSize);
    return res;
}


//2.迭代
int* preorderTraversal(struct TreeNode* root, int* returnSize)
{
    int* res = (int*)malloc(sizeof(int) * 100);
    *returnSize = 0;
    if (root == NULL)
    {
        return res;
    }

    
    //将节点node的值读取到 res 数组中,节点node入栈，node指向左子树
    //当node为空时，循环结束，将node重新赋值为左值为空的节点，也就是返回上一个节点
    //然后，node指向右子树
    struct TreeNode* stk[100];
    struct TreeNode* node = root;
    int top = 0;
    while (top > 0 || node != NULL)
    {
        while (node != NULL)
        {
            res[(*returnSize)++] = node->val;
            stk[top++] = node;
            node = node->left;
        }
        node = stk[--top];
        node = node->right;
    }
    return res;
}

//3.Morris
int* preorderTraversal(struct TreeNode* root, int* returnSize)
{
    int* res = (int*)malloc(sizeof(int) * 100);
    *returnSize = 0;
    if (root == NULL)
        return res;
    struct TreeNode* pre = NULL;
    while (root != NULL) 
    {
        //前序遍历添加根节点
        res[(*returnSize)++] = root->val;
        //左子树不为空，按照前序遍历规则先遍历左子树
        //遍历前先将左子树在前序遍历的最后一个节点指向根节点的右子树。
        //前序遍历的最后一个节点：1、是叶节点，2、优先右子树，如果没有右子树再找左子树
        if (root->left != NULL) 
        {
            pre = root->left;
            //1、是叶节点才终止循环
            while (pre->right != NULL || pre->left != NULL) 
            {
                //2、优先右子树，如果没有右子树再找左子树
                if (pre->right != NULL) 
                {
                    pre = pre->right;
                }
                else 
                {
                    pre = pre->left;
                }
            }
            //最后一个节点指向根节点的右子树
            pre->right = root->right;
            //先遍历左子树
            root = root->left;
        }
        else 
        {
            //左子树为空，按照前序遍历规则遍历右子树。
            root = root->right;
        }
    }
    return res;
}


//二叉树的中序遍历
//递归

void inorder(struct TreeNode* root, int* res, int* resSize)
{
    if (root == NULL)
        return;
    inorder(root->left, res, resSize);
    res[(*resSize)++] = root->val;
    inorder(root->right, res, resSize);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize)
{
    int* ret = (int*)malloc(sizeof(int) * 100);
    *returnSize = 0;
    inorder(root, ret, returnSize);
    return ret;
}

//迭代
int* inorderTraversal(struct TreeNode* root, int* returnSize)
{
    int* ret = (int*)malloc(sizeof(int) * 100);
    *returnSize = 0;

    if (root == NULL)
    {
        return ret;
    }

    struct TreeNode* node = root;
    struct TreeNode* stk[100];
    int top = 0;

    while (top > 0 || node)
    {
        while (node)
        {
            stk[top++] = node;
            node = node->left;
        }
        node = stk[--top];
        ret[(*returnSize)++] = node->val;
        node = node->right;
    }
    return ret;

}


//二叉树的后序遍历
void inorder(struct TreeNode* root, int* res, int* resSize)
{
    if (root == NULL)
        return;
    inorder(root->left, res, resSize);
    res[(*resSize)++] = root->val;
    inorder(root->right, res, resSize);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize)
{
    int* ret = (int*)malloc(sizeof(int) * 100);
    *returnSize = 0;
    inorder(root, ret, returnSize);
    return ret;
}


//另一颗树的子树

bool isSameTree(struct TreeNode* p, struct TreeNode* q)
{
    if (p == NULL && q == NULL)
        return true;
    else if (p == NULL || q == NULL)
        return false;
    else if (p->val != q->val)
        return false;
    else
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}


bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot)
{
    if (root == NULL)
        return false;
    return isSameTree(root, subRoot) ||
        isSubtree(root->left, subRoot) ||
        isSubtree(root->right, subRoot);
}

/*
bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot)
{
    if (root == NULL)
        return false;
    if (isSameTree(root, subRoot))
        return true;

    if (isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot))
        return true;
    return false;
}*/

