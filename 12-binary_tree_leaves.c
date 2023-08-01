#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 *
 * Return: leaves count
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree)
	{
		if (!(tree->right || tree->left))
			return (1);
		else
			return (binary_tree_leaves(tree->right) +
					binary_tree_leaves(tree->left));

	}
	return (0);
}
