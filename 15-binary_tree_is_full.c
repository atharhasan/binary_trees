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
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to traverse
 *
 * Return: 1 if the binary tree is full, 0 if not OR...
 * if the tree is Null
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
		size_t right_height = 0, left_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height = binary_tree_leaves(tree->left) + 1;

	if (tree->right)
		right_height = binary_tree_leaves(tree->right) + 1;

	return ((left_height == right_height) ? 1 : 0);
}
