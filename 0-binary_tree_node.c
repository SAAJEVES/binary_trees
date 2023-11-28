#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creates a node for binary tree
 * @parent: address of parent
 * @value: value of the created node
 * Return: a binary node address
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
