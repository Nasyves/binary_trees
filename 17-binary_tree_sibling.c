#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling node of a given node.
 *
 * @node: Pointer to the node for which to find the sibling.
 *
 * Description: This function determines the sibling node of a given node in a
 * binary tree by checking whether the node has a parent &whether the node is
 * the left or right child of its parent. If the node has no parent or if it is
 * the root of the tree, it has no sibling, and the function returns NULL.
 *
 * Return: Pointer to the sibling node if it exists
 * or NULL if there is no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL); /*If the node is NULL or has no parent, it has no sibling*/
	}
	if (node->parent->left == node)
		return (node->parent->right);
	/* If the node is the left child, return the right child (sibling)*/
	return (node->parent->left);
	/* If the node is the right child, return the left child (sibling)*/
}
