#include "binary_trees.h"

/**
 * binary_tree_uncle - a function that finds the uncle of a node
 *
 * @node: is a pointer to the node to find the uncle
 *
 * Return: the uncle of a node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (node->parent->parent)
		if (node->parent->parent->right == node->parent)
			return node->parent->parent->left;
		else
			return node->parent->parent->right;
	else
		return (NULL);
}
