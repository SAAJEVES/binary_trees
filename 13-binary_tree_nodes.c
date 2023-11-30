#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts the nodes with at
 *	least 1 child in a binary tree
 * @tree: root address
 * Return: number of nodes with requirement
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_1;

	node_1 = 0;
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		node_1 += (tree->left || tree->right) ? 1 : 0;
		node_1 += binary_tree_nodes(tree->left);
		node_1 += binary_tree_nodes(tree->right);
	}
	return (node_1);
}
