#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Rotates a binary tree to the right.
 *
 * @tree: The root node of the tree to be rotated.
 *
 * Description: function performs a right rotation on the given binary tree
 * It rearranges the nodes in such a way that left child of the current root
 * becomes the new root, and the current root becomes
 * the right child of the new root.
 *
 * Return: Pointer to the new root node of the rotated tree.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *pivot;

	if (tree == NULL || tree->left == NULL)
	{
		return (NULL);
		/*If tree is 0 or has no left child it can'tbe rotatd right so return NULL*/
	}
	pivot = tree->left; /*Set pivot to the left child of the current root*/
	tree->left = pivot->right; /*Update the left child of the current root*/

	if (pivot->right != NULL)
	{
		pivot->right->parent = tree; /*Update the parent of right child of pivot*/
	}
	pivot->right = tree; /* Set the right child of pivot to current root*/
	pivot->parent = tree->parent; /*Update the parent of pivot*/
	tree->parent = pivot; /*Update the parent of the current root*/

	return (pivot); /*Return a pointer to the new root node (pivot)*/
}
