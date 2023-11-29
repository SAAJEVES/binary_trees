#include "binary_trees.h"

/**
 * binary_tree_is_leaf - to check if a node is a leaf
 * @node: the node
 * Return: 1 True, 0 False
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int val;

	val = 0;
	if (node->right == NULL && node->left == NULL)
	{
		val++;
		return (val);
	}
	return (val);
}
