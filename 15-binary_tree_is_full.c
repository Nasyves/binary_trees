#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 *
 * @tree: Pointer to the root node of the tree to be checked.
 *
 * Description: function determines whether binary tree is "full," meaning
 * that each node in the tree has either zero children (a leaf) or two children
 * (a parent with a left and right child) If the tree is empty (NULL) it's not
 * considered full.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full = 0, right_full = 0;

	if (tree == NULL)
	{
		return (0); /* If the tree is NULL, it cannot be full, so return 0.*/
	}
	else
	{
		if (tree->left && tree->right)
		{
			/* If both left &right children exist recursively check if they're full*/
			left_full = binary_tree_is_full(tree->left);
			right_full = binary_tree_is_full(tree->right);
			if (left_full == 0 || right_full == 0)
			{
				return (0); /* If either subtree is not full, the tree is not full*/
			}
			return (1); /* If both subtrees are full, the tree is full*/
		}
		else if (!tree->left && !tree->right)
		{
			return (1); /* If the node is a leaf (no children), it is full*/
		}
		else
		{
			return (0); /* If the node has only one child, it is not full*/
		}
	}
}
