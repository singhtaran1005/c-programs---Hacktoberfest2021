// Implement the level order traversal of a binary tree.

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    struct Node *left;
    struct Node *right;
    int data;
};
struct Node *create(int v)
{
    struct Node *root = (struct Node *)malloc(sizeof(struct Node));
    root->left = root->right = NULL;
    root->data = v;
    return root;
}

struct Node *insert(struct Node *root, int data)
{
    if (root == NULL)
    {
        return create(data);
    }
    else
    {
        struct Node *cur;
        if (data <= root->data)
        {
            cur = insert(root->left, data);
            root->left = cur;
        }
        else
        {
            cur = insert(root->right, data);
            root->right = cur;
        }

        return root;
    }
}
void printGivenLevel(struct Node *root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        printf("%d \n", root->data);
    else if (level > 1)
    {
        printGivenLevel(root->left, level - 1);
        printGivenLevel(root->right, level - 1);
    }
}
int height(struct Node *node)
{
    if (node == NULL)
        return 0;
    else
    {
        /* compute the height of each subtree */
        int lheight = height(node->left);
        int rheight = height(node->right);

        /* use the larger one */
        if (lheight > rheight)
            return (lheight + 1);
        else
            return (rheight + 1);
    }
}
void levelOrder(struct Node *root)
{
    {
        int h = height(root);
        int i;
        for (i = 1; i <= h; i++)
            printGivenLevel(root, i);
    }
}
int main()
{
    struct Node *root = NULL;
    struct Node *result;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    levelOrder(root);

    return 0;
}