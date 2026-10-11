#include "binary_tree.h"
#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: Nothing
 */
int main(void)
{
	BinaryTree *tree = malloc(sizeof(BinaryTree));

	insert(tree, 23);
	insert(tree, 10);
	insert(tree, 12);

	int n = count_nodes(tree);
	int *sorted = inorder_traversal(tree, n);

	printf("Node Count: %d\n", n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", sorted[i]);
	}
	putchar('\n');

	return (0);
}
