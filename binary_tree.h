#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <stdlib.h>

/**
 * struct TreeNode - a binary tree node
 *
 * @value: value to be in the node
 * @left: the left child of the node
 * @right: the right child of the node
 */
typedef struct TreeNode
{
	int value;
	struct TreeNode *left;
	struct TreeNode *right;
} TreeNode;

/**
 * struct BinaryTree - a binary tree
 *
 * @root: the root of the binary tree
 */
typedef struct BinaryTree
{
	struct TreeNode *root;
} BinaryTree;

void insert(BinaryTree *tree, int value);
void insert_helper(TreeNode *node, int value);
TreeNode *create_node(int value, TreeNode *left, TreeNode *right);

int count_nodes(BinaryTree *tree);
int count_helper(TreeNode *node);

int *inorder_traversal(BinaryTree *tree, int n);
void inorder_traversal_helper(TreeNode *node, int *i, int *inorder_list);

#endif
