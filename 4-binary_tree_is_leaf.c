#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 *
 * @node: Pointer to the node to check.
 *
 * Return: 1 if node is a leaf, otherwise 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/*Checks if the node is NULL*/
	if (!node)
	{
		return (0);
	}

	/*Checks if the node has any children*/
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}

	return (0);
}
