#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks leaf
 * @node: node
 * Return: int
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int a = 0;

	if (node && !(node->left) && !(node->right))
		a = 1;
	return (a);
}

/**
 * binary_tree_leaves - counts tree leaves
 * @tree: tree
 * Return: int
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
