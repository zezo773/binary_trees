#include "binary_trees.h"
/**
 * binary_tree_node - create a binary tree node
 * @parent: the pointer to the prent node that created
 * @value: the value to put in the node
 *
 * Return: the new node or null
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
