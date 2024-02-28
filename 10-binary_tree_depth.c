#include "binary_trees.h"

/**
 * binary_tree_depth - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 *
 * Return: the depth of a binary tree.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
		depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
