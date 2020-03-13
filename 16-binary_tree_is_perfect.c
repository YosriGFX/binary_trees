#include "binary_trees.h"

/**
 * binary_tree_is_leaf - node is a leaf
 * @node: pointer
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
 * parentfull - node is a parent
 * @node: pointer
 * Return: int
 */
int parentfull(const binary_tree_t *node)
{
	int b = 0;

	if (node && node->left && node->right)
		b = 1;
	return (b);
}

/**
 * height - height of a tree
 * @tree: tree
 * Return: int
 */
int height(const binary_tree_t *tree)
{
	int c = 0;
	int d = 0;

	if (tree == NULL)
		return (-1);
	c = height(tree->left);
	d = height(tree->right);
	if (c > d)
		return (c + 1);
	return (d + 1);
}

/**
 * binary_tree_is_perfect - binary tree is perfect
 * @tree: tree
 * Return: int
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree && height(tree->left) == height(tree->right))
	{
		if (height(tree->left) == -1)
			return (1);
		if (binary_tree_is_leaf(tree->left) && binary_tree_is_leaf(tree->right))
			return (1);
		if (parentfull(tree))
			return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}
	return (0);
}
