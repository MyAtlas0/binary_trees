#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: pointer to the node to insert the left-child in
 *
 * @value: value to store in the new node
 *
 * Return: pointer to the created node or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Check if parent is NULL*/
	if (parent == NULL)
	{
		return (NULL);
	}

	/*Allocate memory for the new left child node*/
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;

	/*Link the new node to the current left child*/
	new_node->left = parent->left;
	new_node->right = NULL;

	/*Update the parent's left child to the new node*/
	parent->left = new_node;
	if (new_node->left != NULL)
	{
		/*If the new node's left child is not NULL, update its parent pointer*/
		new_node->left->parent = new_node;
	}

	return (new_node);
}
