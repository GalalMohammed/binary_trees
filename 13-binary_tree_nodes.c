#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: nodes count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t nodes = 0;

		if (tree->right || tree->left)
		{
			nodes++;
			nodes += binary_tree_nodes(tree->right);
			nodes += binary_tree_nodes(tree->left);
		}
		return (nodes);
	}
	return (0);
}
