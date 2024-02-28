#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to traverse
 *
 * Return: 1 if the binary tree is full, 0 if not OR...
 * if the tree is Null
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
		size_t right_side = 0, left_side = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_side = binary_tree_is_full(tree->left);

	if (tree->right)
		right_side = binary_tree_is_full(tree->right);

	return ((left_side == right_side) ? 1 : 0);
}
