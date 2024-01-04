#include "binary_trees.h"

/**
 * binary_tree_preorder - Performs pre-order traversal on a binary tree.
 *
 * @tree: Pointer to the root node of the tree to be traversed.
 * @func: Pointer to a function to be applied to each node's value.
 *
 * Description: function traverses a binary tree using pre-order traversal.
 * It applies the given function to the value of each node, starting from the
 * root and visiting the left and right subtrees recursively.
 *
 * Return: Nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
		/* If the tree or the function is NULL, no further action is needed*/
	}
	else
	{
		func(tree->n);
		/* Apply the function to the current node's value*/
		binary_tree_preorder(tree->left, func);
		/*Recursively traverse the left subtree*/
		binary_tree_preorder(tree->right, func);
		/* Recursively traverse the right subtree */
	}
}
