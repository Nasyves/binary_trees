#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of nodes in binary tree with children
 *
 * @tree: Pointer to the root node of the tree to be counted.
 *
 * Description: function recursively calculates the number of nodes in a binary
 * tree that have at least one child (either left or right) by checking
 * if the current node has children and if so it counts it and continues count
 * nodes in the left and right subtrees.
 *
 * Return: The number of nodes with children in the binary tree as a size_t.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count = 0;

	if (tree == NULL)
	{
		return (0);
		/* If the tree is NULL, it has no nodes with children, so return 0 */
	}
	else
	{
		/**
		 * Check if the current node has children
		 * (left or right) and increment the count*
		 */
		node_count += ((tree->left || tree->right) ? 1 : 0);

		/* Recursively count nodes with children in the left and right subtrees */
		node_count += binary_tree_nodes(tree->left);
		node_count += binary_tree_nodes(tree->right);

		return (node_count);
	}
}
