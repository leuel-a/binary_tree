# Binary Tree

A small binary tree implementation in C, with node creation, insertion, and pre-order, in-order and post-order traversals. To build and run use:

```sh
gcc -Wall -Wextra -g main.c binary_tree.c traversal.c helpers.c -o main
./main
```

## Example

```c
#include "binary_tree.h"

int main(void) {
    BinaryTree *root = malloc(sizeof(BinaryTree));

    insert(root, 8);
    insert(root, 7);

    int n = count_nodes(root);
    int *inorder_list = inorder_traversal(root, n);

	printf("Node Count: %d\n", n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", inorder_list[i]);
	}
	putchar('\n');

    return 0;
}
```

## Limitations

- TODO: list real limitations (value type, balancing, ordering rules, etc.).
