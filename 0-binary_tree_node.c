#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node.
 *
 * @parent: Pointer to the parent node of the new node.
 * @value: Value to be stored in the new node.
 *
 * Description: This function creates a new binary tree node with the specified
 * value and parent node. The new node has no left or right children initially
 *
 * Return: Pointer to the new node if memory allocation is successful, or NULL
 * if memory allocation fails.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t)); /*Allocate memory for the new node*/
	if (new_node == NULL)
	{
		return (NULL); /*If memory allocation fails, return NULL*/
	}
	new_node->n = value; /* Set the value of the new node*/
	new_node->parent = parent; /*Set the parent of the new node*/
	new_node->left = NULL; /*Initialize the left child to NULL*/
	new_node->right = NULL; /*Initialize the right child to NULL*/
	return (new_node); /* Return a pointer to the new node*/
}
