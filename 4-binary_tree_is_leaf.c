#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if node is a leaf
 *
 * @node: is pointer to the node that will check
 *
 * Return: 1 if yes 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if ((!node->right) && (!node->left))
		return (1);
	else
		return (0);
}
