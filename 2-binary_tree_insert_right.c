#include "binary_trees.h"

/**
 * binary_tree_insert_right - creates a binary tree node.
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node.
 * Return: the pointer of new node.
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = node;
	parent->right = node;

	return (node);
}
