#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a right child node to anoher node
 *
 * @parent: parent is a pointer to the node to insert the right-child in
 * @value: the value of the node
 *
 * Return: return a pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->right = parent->right;
	parent->right = node;
	if (node->right)
		node->right->parent = node;
	node->left = NULL;
	node->parent = parent;
	node->n = value;

	return (node);
}
