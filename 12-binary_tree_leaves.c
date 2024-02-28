#include "binary_trees.h"

/**
 * binary_tree_leaves - Counting the leaves of a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 *
 * Return: the count of a binary tree leaves.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t right_size = 0, left_size = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_size++;

	if (tree->right)
		right_size++;

	return ((!right_size && !left_size) ? 1 : left_size + right_size);
}
