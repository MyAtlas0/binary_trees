#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree using post-order traversal.
 *
 * @tree: Pointer to the root node of the tree to traverse.
 *
 * @func: Pointer to a function to call for each node.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/*Check if the tree or function pointer is NULL*/
	if (!tree || !func)
	{
		return;
	}

	/*Recursively traverse the left and right subtree*/
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);

	/*Call the function with the current node's value*/
	func(tree->n);
}
