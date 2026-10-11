#include "binary_tree.h"

/**
 * count_nodes - count the nodes of a binary tree
 *
 * @tree: the tree to be counted
 *
 * Return: the number of nodes in the tree
 */
int count_nodes(BinaryTree *tree)
{
	if (tree == NULL || tree->root == NULL)
	{
		return (0);
	}
	return (count_helper(tree->root));
}

/**
 * count_helper - a helper function to count the nodes in a binary tree
 *
 * @node: the node to be visited
 *
 * Return: the number of nodes in this sub-tree
 */
int count_helper(TreeNode *node)
{
	if (node == NULL)
	{
		return (0);
	}

	return (1 + count_helper(node->left) + count_helper(node->right));
}
