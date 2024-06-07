#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least one child
 *
 * @tree: pointer to the root node
 *
 * Return: number of nodes with at least one child, or 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t right_node, left_node;

	if (!tree)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	right_node = binary_tree_nodes(tree->right);
	left_node = binary_tree_nodes(tree->left);

	return (1 + (left_node + right_node));
}
