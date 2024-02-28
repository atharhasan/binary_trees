#include "binary_trees.h"

/**
 * binary_tree_leaves - Counting the leaves of a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 *
 * Return: the count of a binary tree leaves.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t right_leaves = 0, left_leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_leaves = binary_tree_leaves(tree->left);

	if (tree->right)
		right_leaves = binary_tree_leaves(tree->right);

	return ((!right_leaves && !left_leaves) ? 1 : left_leaves + right_leaves);
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
		size_t right_side = 0, left_side = 0, left_leaves = 0,
		right_leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		left_side = binary_tree_is_perfect(tree->left);
		left_leaves = binary_tree_leaves(tree->left);
	}
	if (tree->right)
	{
		right_side = binary_tree_is_perfect(tree->right);
		right_leaves = binary_tree_leaves(tree->right);
	}

	return ((left_side == right_side) && (left_leaves == right_leaves) ? 1 : 0);
}
