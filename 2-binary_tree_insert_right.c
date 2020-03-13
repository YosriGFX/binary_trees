#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node as right child of other node
 * @parent: parent
 * @value: int
 * Return: pointer
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *a;

	if (parent == NULL)
		return (NULL);
	a = malloc(sizeof(binary_tree_t));
	if (a == NULL)
		return (NULL);
	a->parent = parent;
	a->n = value;
	a->left = NULL;
	a->right = parent->right;
	if (parent->right != NULL)
		parent->right->parent = a;
	parent->right = a;
	return (a);
}
