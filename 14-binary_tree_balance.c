#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - a function that measures the balance factor of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the balance factor
 *
 * RETURN: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_height - a function that measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: the number of height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t left_height, right_height;

        if (!(tree) || (!(tree->left) && !(tree->right)))
                return (0);
        left_height = binary_tree_height(tree->left);
        right_height = binary_tree_height(tree->right);
        if (left_height >= right_height)
                return left_height + 1;
        else
                return right_height + 1;
}
