#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if the node is a root or not
 *
 * @node: pointer to the node to check
 *
 * Return: 1 in sucess and 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!(node->parent))
		return (1);
	else
		return (0);
}
