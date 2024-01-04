#include "binary_trees.h"

/**
 * binary_tree_postorder - Performs post-order traversal on a binary tree.
 *
 * @tree: Pointer to the root node of the tree to be traversed.
 * @func: Pointer to a function to be applied to each node's value.
 *
 * Description: This function traverses a binary tree using post-order traversal.
 * It applies the given function to the value of each node, visiting the left
 * and right subtrees recursively and then the current node.
 *
 * Return: Nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return; /* If the tree or the function is NULL, no further action is needed*/
	}
	else
	{
		binary_tree_postorder(tree->left, func);  /* Recursively traverse the left subtree*/
		binary_tree_postorder(tree->right, func); /* Recursively traverse the right subtree*/
	}
	func(tree->n); /*Apply the function to the current node's value after subtrees are processed*/
}
