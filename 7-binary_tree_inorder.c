#include "binary_trees.h"

/**
* binary_tree_inorder - Traverses a binary tree in-order .
* @tree: Pointer to the root node  of the tree to traverse .
* @func: Pointer to a function to call for each node's value .
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	binary_tree_inorder(tree->left, func);

	func(tree->n);

	binary_tree_inorder(tree->right, func)
	return (0);
}	
