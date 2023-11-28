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

	left_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (left_node == NULL || parent == NULL)
		return (NULL);
	left_node->n = value;
	left_node->right = NULL;
	left_node->left = NULL;
	left_node->parent = parent;
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
