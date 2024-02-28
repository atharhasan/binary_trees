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
	else if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;
	return (left_height > right_height ? left_height : right_height);
}
