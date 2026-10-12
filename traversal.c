#include "binary_tree.h"

/**
 * inorder_traversal - the inorder traversal of the binary tree
 *
 * @tree: the binary tree to be traversed
 * @n: the size of the binary tree
 *
 * Return: a pointer to the location of the inorder travesal list
 */
int *inorder_traversal(binary_tree_t *tree, int n)
{
	int i = 0;
	int *inorder_list = (int *)malloc(sizeof(int) * n);

	inorder_traversal_helper(tree->root, &i, inorder_list);
	return (inorder_list);
}

/**
 * inorder_traversal_helper - a helper function to get the inorder list
 *
 * @node: the current node to be traversed
 * @i: the current index for the inorder list
 * @inorder_list: a pointer to the inorder list of the nodes
 *
 * Return: Nothing
 */
void inorder_traversal_helper(tree_node_t *node, int *i, int *inorder_list)
{
	if (node == NULL)
	{
		return;
	}

	inorder_traversal_helper(node->left, i, inorder_list);
	inorder_list[(*i)] = node->value;
	(*i)++;
	inorder_traversal_helper(node->right, i, inorder_list);
}
