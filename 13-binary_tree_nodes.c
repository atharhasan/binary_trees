#include "binary_trees.h"

/**
 * binary_tree_leaves - Counting the leaves of a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 *
 * Return: the count of a binary tree leaves.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_count = 0;

	if (tree == NULL)
		return (0);

	nodes_count = ((tree->left || tree->right) ? 1 : 0);
	nodes_count += binary_tree_nodes(tree->left);
	nodes_count += binary_tree_nodes(tree->right);

	return (nodes_count);
}
