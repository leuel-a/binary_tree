#include "binary_tree.h"

/**
 * insert - inserts a value to the binary tree
 *
 * @tree: the binary tree
 * @value: the value to be inserted
 *
 * Return: Nothing
 */
void insert(binary_tree_t *tree, int value)
{
	if (tree->root == NULL)
	{
		tree->root = create_node(value, NULL, NULL);
		return;
	}

	insert_helper(tree->root, value);
}

/**
 * insert_helper - a helper function to insert a node
 *
 * @node: the node where the new value will be added to
 * @value: the new value to be added
 *
 * Return: Nothing
 */
void insert_helper(tree_node_t *node, int value)
{
	if (node->value > value)
	{
		if (node->left)
			insert_helper(node->left, value);
		else
			node->left = create_node(value, NULL, NULL);
	}
	else
	{
		if (node->right)
			insert_helper(node->right, value);
		else
			node->right = create_node(value, NULL, NULL);
	}
}

/**
 * create_node - creates a new binary tree node
 *
 * @value: the value to be stored in the node
 * @left: the left child of the node
 * @right: the right child of the node
 *
 * Return: a pointer to the created node
 */
tree_node_t *create_node(int value, tree_node_t *left, tree_node_t *right)
{
	tree_node_t *node = malloc(sizeof(tree_node_t));

	node->value = value;
	node->left = left;
	node->right = right;

	return (node);
}
