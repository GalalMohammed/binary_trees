#include "binary_trees.h"


/**
 * helper - measures the height of a binary tree corresponding to its parent
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: returns height if tree is not NULL, 0 otherwise
 */
size_t helper(const binary_tree_t *tree)
{
	size_t leftHeight = 1, rightHeight = 1;

	if (tree)
	{
		if (tree->left)
			leftHeight = helper(tree->left) + 1;
		if (tree->right)
			rightHeight = helper(tree->right) + 1;
		if (leftHeight > rightHeight)
			return (leftHeight);
		else
			return (rightHeight);
	}
	return (0);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (helper(tree->left) - helper(tree->right));
	}
	return (0);
}
