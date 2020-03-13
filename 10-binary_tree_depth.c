#include "binary_trees.h"

/**
 * rdepth - node depth
 * @tree: tree
 * Return: depth
 */
size_t rdepth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (rdepth(tree->parent) + 1);
}

/**
 * binary_tree_depth - calls rdepth
 * @tree: tree
 * Return: depth
 **/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (rdepth(tree));
}
