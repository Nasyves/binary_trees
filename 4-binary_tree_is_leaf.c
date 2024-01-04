#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf meaning it has no children
 *
 * @node: Pointer to the node to be checked.
 *
 * Description: This function determines whether a given node is a leaf in a
 * binary tree. A leaf node has no left or right children.
 *
 * Return: 1 if the node is a leaf, 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0); /* If the node is NULL, it cannot be a leaf, return 0 */
	if (node->left == NULL && node->right == NULL)
		return (1); /* If both left and right children are NULL, it is a leaf*/
	return (0); /* Otherwise, it is not a leaf, return 0*/
}
