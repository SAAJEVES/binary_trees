#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: address of tree
 * Return: size of tree;
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t first, second;

	if (tree == NULL)
		return (0);
	first = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	second = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (first > second ? first : second);
}
