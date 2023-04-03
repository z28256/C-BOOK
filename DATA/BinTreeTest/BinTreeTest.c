#define _CRT_SECURE_NO_WARNINGS 1

#include <stdbool.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};


//���������ÿ���ڵ㶼������ͬ��ֵ����ô�ö��������ǵ�ֵ��������

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


//�������ö������ĸ��ڵ� p �� q ����дһ���������������������Ƿ���ͬ��

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


//�Գƶ�����

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


//��������ǰ�����

//1.�ݹ�
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


//2.����
int* preorderTraversal(struct TreeNode* root, int* returnSize)
{
    int* res = (int*)malloc(sizeof(int) * 100);
    *returnSize = 0;
    if (root == NULL)
    {
        return res;
    }

    
    //���ڵ�node��ֵ��ȡ�� res ������,�ڵ�node��ջ��nodeָ��������
    //��nodeΪ��ʱ��ѭ����������node���¸�ֵΪ��ֵΪ�յĽڵ㣬Ҳ���Ƿ�����һ���ڵ�
    //Ȼ��nodeָ��������
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
        //ǰ�������Ӹ��ڵ�
        res[(*returnSize)++] = root->val;
        //��������Ϊ�գ�����ǰ����������ȱ���������
        //����ǰ�Ƚ���������ǰ����������һ���ڵ�ָ����ڵ����������
        //ǰ����������һ���ڵ㣺1����Ҷ�ڵ㣬2�����������������û������������������
        if (root->left != NULL) 
        {
            pre = root->left;
            //1����Ҷ�ڵ����ֹѭ��
            while (pre->right != NULL || pre->left != NULL) 
            {
                //2�����������������û������������������
                if (pre->right != NULL) 
                {
                    pre = pre->right;
                }
                else 
                {
                    pre = pre->left;
                }
            }
            //���һ���ڵ�ָ����ڵ��������
            pre->right = root->right;
            //�ȱ���������
            root = root->left;
        }
        else 
        {
            //������Ϊ�գ�����ǰ��������������������
            root = root->right;
        }
    }
    return res;
}


//���������������
//�ݹ�

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

//����
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


//�������ĺ������
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


//��һ����������

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

