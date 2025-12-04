#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: the number of height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;
	if (!tree || (!tree->left && !tree->right))
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	if (l >= r)
		return (l + 1);
	else
		return (r + 1);
}

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * 
 * @tree is a pointer to the root node of the tree to check
 * 
 * Return: bolean result 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l, r;
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (!tree->left || !tree->right)
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	if (l != r)
		return (0);

	return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
}
