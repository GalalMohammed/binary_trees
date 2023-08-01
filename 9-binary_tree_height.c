#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: returns height if tree is not NULL, 0 otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0, rightHeight = 0;

	if (tree)
	{
		if (tree->left)
			leftHeight = binary_tree_height(tree->left) + 1;
		if (tree->right)
			rightHeight = binary_tree_height(tree->right) + 1;
		if (leftHeight > rightHeight)
			return (leftHeight);
		else
			return (rightHeight);
	}
	return (0);
}
