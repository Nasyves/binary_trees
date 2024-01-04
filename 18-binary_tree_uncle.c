#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle node of a given node.
 *
 * @node: Pointer to the node for which to find the uncle.
 *
 * Description: This function determines the uncle node of a given node in a
 * binary tree by checking whether the node has a parent and whether the parent
 * has a parent (grandparent). If the node has no parent or grandparent, or if
 * the node is the root of the tree, it has no uncle &the function returns NULL
 *
 * Return: Pointer to the uncle node if it exists
 * or NULL if there is no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
		/* If the node is NULL has no parent or has no grandparent it has no uncle*/
	}
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	/* If the parent is the left child, return the right child (uncle)*/
	return (node->parent->parent->left);
	/* If the parent is the right child, return the left child (uncle)*/
}
