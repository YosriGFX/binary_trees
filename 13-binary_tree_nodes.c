#include "binary_trees.h"

/**
 * binary_tree_is_parent - parent
 * @node: node
 * Return: int
 */
int binary_tree_is_parent(const binary_tree_t *node)
{
	int a = 0;

	if (node && (node->left || node->right))
		a = 1;
	return (a);
}

/**
 * binary_tree_nodes - counts
 * @tree: tree
 * Return: int
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (binary_tree_is_parent(tree))
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	return (0);
}
