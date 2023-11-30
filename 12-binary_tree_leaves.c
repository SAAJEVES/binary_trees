#include "binary_trees.h"

/**
 * binary_tree_leaves - checks for leaves in a binary tree
 * @tree: root address
 * Return: number of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num_leaves;

	num_leaves = 0;
	if (tree == NULL)
		return (0);
	else
	{
		num_leaves += (!tree->left && !tree->right) ? 1 : 0;
		num_leaves += binary_tree_leaves(tree->left);
		num_leaves += binary_tree_leaves(tree->right);
	}
	return (num_leaves);
}
