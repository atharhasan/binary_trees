#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 *
 * Return: the size of a binary tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right_size = 0, left_size = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_size = binary_tree_size(tree->left);

	if (tree->right)
		right_size = binary_tree_size(tree->right);

	return ((left_size + right_size) + 1);
}
