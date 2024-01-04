#include "binary_trees.h"

/**
 * binary_trees_ancestor - Find lowest common ancestor of 2nodes in binary tree
 *
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Description: function finds &returns lowest common ancestor
 * of 2nodes in a binary tree
 * It recursively traces the ancestry of both nodes
 * and compares their parent nodes to determine the ancestor.
 *
 * Return: Pointer to the lowest common ancestor node if it exists,
 * NULL otherwise.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *p, *q;

	if (first == NULL || second == NULL)
	{
		return (NULL);
		/* If either node is NULL there cannot be a common ancestor so return NULL*/
	}
	if (first == second)
	{
		return ((binary_tree_t *)first);
		/* If the nodes are same they're their own common ancestor*/
	}

	p = first->parent;
	q = second->parent;
	if (p == NULL || first == q || (!p->parent && q))
	{
		return (binary_trees_ancestor(first, q));
		/*Recursively check the ancestor of first and second's parent*/
	}
	else if (q == NULL || p == second || (!q->parent && p))
	{
		return (binary_trees_ancestor(p, second));
		/* Recursively check the ancestor of second &first's parent*/
	}
	return (binary_trees_ancestor(p, q));
	/* Continue checking ancestors of the parents*/
}
