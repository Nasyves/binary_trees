#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to be measured.
 *
 * Description: This function calculates the height of a binary tree, which is
 * the length of the longest path from the root node to a leaf node. It does
 * this by recursively calculating the height of the left and right subtrees
 * and returning the maximum height plus 1.
 *
 * Return: The height of the binary tree as a size_t.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0); /* If the tree is NULL, it has no height, return 0 */
	}
	else
	{
		if (tree)
		{
			/* Calculate the height of the left and right subtrees recursively*/
			left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		/**
		 * Return the maximum height of left
		 * and right subtrees plus 1 for the current node
		 */
		return ((left_height > right_height) ? left_height : right_height);
	}
}
