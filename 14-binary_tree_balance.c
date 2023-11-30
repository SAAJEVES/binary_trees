#include "binary_trees.h"


/**
 * binary_tree_balance - a function that measures the balance factor
 *	of a binary tree
 * @tree: root address
 * Return: an integer
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	left = 0;
	right = 0;
	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left = 1 + binary_tree_balance(tree->left);

	if (tree->right != NULL)
		right = 1 + binary_tree_balance(tree->right);

	return (left - right);
}
