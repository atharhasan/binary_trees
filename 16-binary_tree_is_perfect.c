#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 *
 * Return: the higth of a binary tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height = 0, left_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height = binary_tree_height(tree->left) + 1;

	if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;

	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to traverse
 *
 * Return: 1 if the binary tree is perfect, 0 if not OR...
 * if the tree is Null
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
		size_t right_side = 0, left_side = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_side = binary_tree_height(tree->left);

	if (tree->right)
		right_side = binary_tree_height(tree->right);

	return ((left_side == right_side) ? 1 : 0);
}
