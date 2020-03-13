#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotation
 * @tree: tree
 * Return: pointer
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *a;

	if (tree == NULL || tree->right == NULL)
		return (tree);
	a = tree->right;
	if (a->left)
	{
		a->left->parent = tree;
		tree->right = a->left;
	}
	else
	{
		tree->right = NULL;
	}
	a->left = tree;
	a->parent = tree->parent;
	tree->parent = a;
	return (a);
}
