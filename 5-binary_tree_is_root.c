#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a node is a root
 * @node: address of node
 * Return: 1 if True, 0 if False
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right != NULL || node->left != NULL)
		return (1);
	if (node->parent == NULL)
		return (1);
	return (0);
}
