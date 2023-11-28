#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert value to left
 * @parent: address of parent
 * @value: value to insert
 * Return: an address of node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	if (parent == NULL)
		return (NULL);
	left_node = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		left_node->left = parent->left;
		parent->left->parent = left_node;
		parent->left = left_node;
	}
	else
	{
		parent->left = left_node;
	}
	return (left_node);
}
