#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Rotates a binary tree to the left.
 *
 * @tree: The root node of the tree to be rotated.
 *
 * Description: This function performs a left rotation on the given binary tree
 * It rearranges the nodes in such a way that the right child of current root
 * becomes the new root, &the current root becomes left child of the new root.
 *
 * Return: Pointer to the new root node of the rotated tree.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *pivot;

	if (tree == NULL || tree->right == NULL)
	{
		return (NULL);
		/*If tree is 0 or has no right child it can't brotatd left so return NULL*/
	}
	pivot = tree->right; /*Set pivot to the right child of current root*/
	tree->right = pivot->left; /* Update the right child of current root*/

	if (pivot->left != NULL)
	{
		pivot->left->parent = tree;
		/*Update the parent of the left child of pivot*/
	}
	pivot->left = tree; /*Set the left child of pivot to the current root*/
	pivot->parent = tree->parent; /*Update the parent of pivot*/
	tree->parent = pivot; /* Update the parent of the current root*/

	return (pivot); /*Return a pointer to the new root node (pivot)*/
}
