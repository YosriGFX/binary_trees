#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation
 * @tree: tree root
 * Return: pointer
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *a;

	if (tree == NULL || tree->left == NULL)
		return (tree);
	a = tree->left;
	if (a->right)
	{
	a->right->parent = tree;
	tree->left = a->right;
	}
	else
	{
	tree->left = NULL;
	}
	a->right = tree;
	a->parent = tree->parent;
	tree->parent = a;
	return (a);
}
