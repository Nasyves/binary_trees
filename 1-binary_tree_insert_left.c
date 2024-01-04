#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new node as theleft child of parent node
 *
 * @parent: Pointer to the parent node.
 * @value: Value to be stored in the new left child node.
 *
 * Description: This function inserts a new binary tree node wit given value
 * as the left child of the specified parent node. If the parent already has a
 * left child, the existing left child is moved down 1level to left of the
 * new node.
 *
 * Return: Pointer to the newly created node or NULL if memory allocation fails
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Check if the parent node is NULL*/
	if (parent == NULL)
	{
		return (NULL);
	}

	/* Create a new node with the specified value and parent*/
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL); /* Memory allocation failed, return NULL */
	}

	/* If the parent already has a left child, adjust pointers*/
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		/* New node's left child becomes the existing left child */
		parent->left->parent = new_node;
		/*Existing left child's parent becomes the new node */
	}

	/* Update the parent's left child to be the new node*/
	parent->left = new_node;

	return (new_node); /* Return a pointer to the new node*/
}
