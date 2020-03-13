#include "binary_trees.h"

/**
 * binary_tree_is_root - root ?
 * @node: pointer to node
 * Return: int
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	int a = 0;

	if (node && !(node->parent))
		a = 1;
	return (a);
}
