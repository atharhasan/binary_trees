#include "binary_trees.h"

/**
 * binary_tree_delete - creates a binary tree node.
 * @tree: is a pointer to the root node of the tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left != NULL)
	{
		if (tree->parent != NULL)
		{
			if (tree->parent->left == tree)
				tree->parent->left = tree->left;
			else
				tree->parent->right = tree->left;
		}

		tree->left->parent = tree->parent;
	}

	else if (tree->right != NULL)
	{
		if (tree->parent != NULL)
		{
			if (tree->parent->left == tree)
				tree->parent->left = tree->right;
			else
				tree->parent->right = tree->right;
		}
		tree->right->parent = tree->parent;
	}
	else
	{
		if (tree->parent != NULL)
		{
			if (tree->parent->left == tree)
				tree->parent->left = NULL;
			else
				tree->parent->right = NULL;
		}
	}
	free(tree);
}
