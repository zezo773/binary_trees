#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a left child node to anoher node
 *
 * @parent: parent is a pointer to the node to insert the left-child in
 * @value: the value of the node
 *
 * Return: return a pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (!parent)
		return (NULL);
	binary_tree_t *node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->left = parent->left;
	parent->left = node;
	if (node->left)
		node->left->parent = node;
	node->parent = parent;
	node->right = NULL;
	node->n = value;

	return (node);
}
