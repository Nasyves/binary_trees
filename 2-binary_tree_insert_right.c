#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new node as right child of parent node
 *
 * @parent: Pointer to the parent node.
 * @value: Value to be stored in the new right child node.
 *
 * Description: function inserts a new binary tree node with the given value
 * as the right child of the specified parent node. If the parent already has a
 * right child, te existing right child is moved down one level to the right of
 * the new node.
 *
 * Return: Pointer to the newly created node or NULL if memory allocation fails
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Check if the parent node is NULL*/
	if (parent == NULL)
	{
		return (NULL);
	}

	/*Create a new node with the specified value and parent*/
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL); /* Memory allocation failed, return NULL*/
	}

	/* If the parent already has a right child, adjust pointers*/
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		/* New node's right child becomes the existing right child */
		parent->right->parent = new_node;
		/* Existing right child's parent becomes the new node*/
	}

	/* Update the parent's right child to be the new node*/
	parent->right = new_node;

	return (new_node); /*Return a pointer to the new node*/
}
