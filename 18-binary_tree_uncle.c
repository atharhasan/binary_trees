#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: is a pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *tree, *grandpa;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	tree = node->parent;
	grandpa = tree->parent;
	if (grandpa != NULL)
	{
		if (grandpa->left != NULL && grandpa->left != tree)
		{
			return (grandpa->left);
		}
		else if (grandpa->right != NULL && grandpa->right != tree)
		{
			return (grandpa->right);
		}
		else
		{
			return (NULL);
		}
	}
	else
		return (NULL);
}
