#include "binary_trees.h"

/**
 * binary_tree_inorder - Performs in-order traversal on a binary tree.
 *
 * @tree: Pointer to the root node of the tree to be traversed.
 * @func: Pointer to a function to be applied to each node's value.
 *
 * Description: This function traverses a binary tree using in-order traversal.
 * It applies the given function to the value of each node, visiting the left
 * subtree, then the current node, and finally the right subtree recursively.
 *
 * Return: Nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
		/* If the tree or the function is NULL, no further action is needed.*/
	}
	else
	{
		binary_tree_inorder(tree->left, func);
		/* Recursively traverse the left subtree*/
		func(tree->n); /* Apply the function to the current node's value */
		binary_tree_inorder(tree->right, func);
		/* Recursively traverse the right subtree*/
	}
}
