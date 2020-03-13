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
 * binary_tree_is_full - binary tree is full
 * @tree: tree
 * Return: int
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (binary_tree_is_leaf(tree))
		return (1);
	if (parentfull(tree))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
