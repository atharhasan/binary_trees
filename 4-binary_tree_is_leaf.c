#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if nodes are leaves
 * @node: pointer to the node that we are checking
 *
 * Return: return 1 if node is leaf, 0 if not OR...
 * If node is NULL returns 0 too
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!(node->left) && !(node->right))
		return (1);

	return (0);
}