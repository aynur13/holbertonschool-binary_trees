#include "binary_trees.h"

/**
* binary_tree_is_leaf - checks if a node is a leaf
* @node: pointer to the node to check
* Return: 1 if the node is a leaf, 0 otherwise or node = NULL
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}

	if (!node->left && !node->right)
	{
		return (1);
	}

	return (0);
}
