#include "binary_trees.h"

/**
 * tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: Pointer to the root node of the tree to be checked.
 *
 * Description: function determines whether binary tree is "perfect," which
 * means that it has the same quantity of levels in the left &right subtrees,
 * and each non-leaf node has exactly 2children. function recursively checks
 * the left and right subtrees &ensures they're perfect &that their levels
 * match. If the tree is empty (NULL), it is not considered perfect.
 *
 * Return: If the tree is perfect it returns level (height) of the tree as an
 * integer. If the tree is not perfect, it returns 0.
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int left_level = 0, right_level = 0;

	if (tree->left && tree->right)
	{
		/* Recursively calculate the levels of the left and right subtrees*/
		left_level = 1 + tree_is_perfect(tree->left);
		right_level = 1 + tree_is_perfect(tree->right);

		/* Check if both subtrees have the same level and are perfect*/
		if (right_level == left_level && right_level != 0 && left_level != 0)
			return (right_level); /* Return the level if the tree is perfect*/
		return (0); /* Return 0 if the tree is not perfect*/
	}
	else if (!tree->left && !tree->right)
	{
		return (1); /* If the node is a leaf (no children), it is perfect*/
	}
	else
	{
		return (0); /* If the node has only one child, it is not perfect*/
	}
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: Pointer to the root node of the tree to be checked.
 *
 * Description: This function checks if a binary tree is perfect by calling the
 * `tree_is_perfect` function &returning 1 if the tree is perfect, or 0 if it
 * is not perfect or if the tree is empty (NULL).
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
	{
		return (0); /* If the tree is NULL, it cannot be perfect, so return 0 */
	}
	else
	{
		result = tree_is_perfect(tree);
		if (result != 0)
		{
			return (1); /* If the result is not 0, the tree is perfect, so return 1 */
		}
		return (0); /* If the result is 0, the tree is not perfect, so return 0.*/
	}
}
