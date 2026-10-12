#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <stdlib.h>

/**
 * struct tree_node - a binary tree node
 *
 * @value: value to be in the node
 * @left: the left child of the node
 * @right: the right child of the node
 */
typedef struct tree_node
{
	int value;
	struct tree_node *left;
	struct tree_node *right;
} tree_node_t;

/**
 * struct binary_tree - a binary tree
 *
 * @root: the root of the binary tree
 */
typedef struct binary_tree
{
	struct tree_node *root;
} binary_tree_t;

void insert(binary_tree_t *tree, int value);
void insert_helper(tree_node_t *node, int value);
tree_node_t *create_node(int value, tree_node_t *left, tree_node_t *right);

int count_nodes(binary_tree_t *tree);
int count_helper(tree_node_t *node);

int *inorder_traversal(binary_tree_t *tree, int n);
void inorder_traversal_helper(tree_node_t *node, int *i, int *inorder_list);

#endif
