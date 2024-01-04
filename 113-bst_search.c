#include "binary_trees.h"

/**
 * bst_search - Searches for a specified value in a binary search tree (BST).
 *
 * @tree: Pointer to the root node of the BST.
 * @value: Value to search for in the BST.
 *
 * Description: function recursively searches a BST for a given value and
 * returns a pointer to node that contains the value. If value is not
 * found in the tree, it returns NULL.
 *
 * Return: Pointer to node containing value if found or NULL if not found
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *found;

	if (tree == NULL)
		return (NULL); /*If the tree is NULL value can't be found so return NULL*/

	if (value < tree->n)
	{
		found = bst_search(tree->left, value); /*Recursively search left subtree*/
	}
	else if (value > tree->n)
	{
		found = bst_search(tree->right, value); /*Recursively search right subtree*/
	}
	else if (value == tree->n)
		return ((bst_t *)tree);
	/*If the value matches the current node's value, return the node*/
	else
		return (NULL); /*Return NULL if none of the above conditions match*/

	return (found); /*Return the pointer to the found node or NULL if not found*/
}
