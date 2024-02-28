#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if nodes are roots
 * @node: pointer to the node we are checking on
 *
 * Return: return 1 if node is a root, 0 if not OR...
 * If node is NULL returns 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!(node->parent))
		return (1);

	return (0);
}
