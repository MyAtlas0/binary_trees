#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root.
 *
 * @node: Pointer to the node to check.
 *
 * Return: 1 if node is a root, otherwise 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	/*Check if the node is NULL*/
	if (!node)
	{
		return (0);
	}

	/*Check if the node has no parent (indicating it is a root)*/
	if (node->parent == NULL)
	{
		return (1);
	}

	return (0);
}
