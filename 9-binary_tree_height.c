#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: the height of the tree or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	/*If the tree is NULL, the height is 0*/
	if (!tree)
	{
		return (0);
	}

	/*Calculate the height of the left and right subtrees*/
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}
