#include "binary_trees.h"

/**
 * rheight - height measure
 * @tree: tree
 * Return: int
 */
size_t rheight(const binary_tree_t *tree)
{
	size_t a = 0;
	size_t b = 0;

	if (tree == NULL)
		return (0);
	a = rheight(tree->left);
	b = rheight(tree->right);
	if (a > b)
		return (a + 1);
	return (b + 1);
}

/**
 * binary_tree_height - rheight
 * @tree: tree
 * Return: int
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (rheight(tree) - 1);
}
