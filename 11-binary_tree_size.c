#include "binary_trees.h"

/**
 * binary_tree_size - Calculates the size (number of nodes) of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to be measured.
 *
 * Description: This function recursively calculates the size of a binary tree,
 * which is the total number of nodes in the tree. It does this by summing up
 * the sizes of the left and right subtrees and adding 1 for the current node.
 *
 * Return: The size of the binary tree as a size_t.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, left_size = 0, right_size = 0;

	if (tree == NULL)
	{
		return (0); /* If the tree is NULL, its size is 0.*/
	}
	else
	{
		/* Recursively calculate the sizes of the left and right subtrees*/
		left_size = binary_tree_size(tree->left);
		right_size = binary_tree_size(tree->right);

		/* Calculate the total size by summing up the left and right subtree sizes*/
		/* and adding 1 for the current node*/
		size = left_size + right_size + 1;
	}

	return (size);
}
