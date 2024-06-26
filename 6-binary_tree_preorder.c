#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal.
 *
 * @tree: Pointer to the root node of the tree to traverse.
 *
 * @func: Pointer to a function to call for each node. The value in the node
 *		must be passed as a parameter to this function.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/*Check if the tree or function pointer is NULL*/
	if (!tree || !func)
	{
		return;
	}
	func(tree->n);

	/*Recursively traverse the left subtree*/
	binary_tree_preorder(tree->left, func);

	/*Recursively traverse the right subtree*/
	binary_tree_preorder(tree->right, func);
}
