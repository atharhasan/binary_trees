#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tree = node->parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (tree->left != NULL && tree->left != node)
		return (tree->left);
	else if (tree->right != NULL && tree->right != node)
		return (tree->right);
	else
		return (NULL);
}
