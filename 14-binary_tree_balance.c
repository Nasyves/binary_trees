#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures height of binary tree for a balanced tree.
 *
 * @tree: Pointer to the root node of the tree to be measured.
 *
 * Description: function calculates the height of binary tree specifically
 * for a balanced tree. For a balanced tree, the height is calculated such that
 * it takes into account both left &right subtrees returning the maximum height
 * of the two plus 1 for the current node.
 *
 * Return: The height of the binary tree as a size_t.
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
	{
		return (0); /* If the tree is NULL, its height is 0*/
	}
	else
	{
		/* Calculate the height of the left and right subtrees for a balanced tree*/
		left_height = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
		right_height = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;

		/* Return maximum height of left &right subtrees plus 1 for current node*/
		return ((left_height > right_height) ? left_height : right_height);
	}
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to be measured.
 *
 * Description: This function calculates the balance factor of a binary tree by
 * computing the difference in height between the left and right subtrees. a +
 * balance factor means the tree is left-heavy negative means it's right-heavy
 * and zero means it's balanced.
 *
 * Return: The balance factor of the binary tree as an integer.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0, balance_factor = 0;

	if (tree)
	{
		/* Calculate the height of the left and right subtrees*/
		left_height = (int)binary_tree_height_b(tree->left);
		right_height = (int)binary_tree_height_b(tree->right);

		/* Calculate balance factor by subtracting right height from left height*/
		balance_factor = left_height - right_height;
	}

	return (balance_factor);
}
