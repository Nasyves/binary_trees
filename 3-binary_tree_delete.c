#include "binary_trees.h"

/**
 * binary_tree_delete - Recursively frees an entire binary tree.
 *
 * @tree: Pointer to the root node of the tree to be freed.
 *
 * Description: This function recursively deletes an entire binary tree by
 * freeing each node. It starts from the bottom of the tree (leaves) and
 * works its way up to the root.
 *
 * Return: Nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return; /* If the tree is empty (NULL), no further action is needed*/
	}
	else
	{
		if (tree != NULL)
		{
			/* Recursively delete the left and right subtrees*/
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		/* After the subtrees are deleted, free the current node*/
		free(tree);
	}
}
