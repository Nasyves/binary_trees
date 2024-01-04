#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 *
 * @tree: Pointer to the node for which to measure the depth.
 *
 * Description: This function calculates the depth of a specified node in a
 * binary tree by recursively traversing the tree from the given node to its
 * parent incrementing the depth count with each step until it reaches the root
 *
 * Return: The depth of the node as a size_t. If the node is the root or if the
 * node is NULL, the depth is 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
