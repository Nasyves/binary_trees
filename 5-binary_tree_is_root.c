#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root in a binary tree.
 *
 * @node: Pointer to the node to be checked.
 *
 * Description: This function determines whether a given node is a root in
 * a binary tree. A root node is one that has no parent.
 *
 * Return: 1 if the node is a root, 0 otherwise.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	/* If the node is NULL or has a parent, it is not a root, return 0 */
	return (1); /* If the node has no parent, it is a root, return 1 */
}
