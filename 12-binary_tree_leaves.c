#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaf nodes in a binary tree.
 *
 * @tree: Pointer to the root node of the tree to be counted.
 *
 * Description: This function recursively calculates the number of leaf nodes
 * in a binary tree. A leaf node is a node that has no left or right children.
 * It does this by counting the leaf nodes in the left and right subtrees and
 * adding 1 for the current node if it is a leaf.
 *
 * Return: The number of leaf nodes in the binary tree as a size_t.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_count = 0, left_leaves = 0, right_leaves = 0;

	if (tree == NULL)
	{
		return (0); /* If the tree is NULL, it has no leaves, so return 0 */
	}
	else
	{
	/**
	 * Recursively count the number of leaf nodes
	 * in the left and right subtrees
	 */
		left_leaves = binary_tree_leaves(tree->left);
		right_leaves = binary_tree_leaves(tree->right);

		/**
		 * Calculate the total leaf count by summing up the left
		 * and right subtree counts
		 */
		/* and adding 1 for the current node if it is a leaf itself*/
		leaf_count = left_leaves + right_leaves;
		return ((!left_leaves && !right_leaves) ? leaf_count + 1 : leaf_count);
	}
}
