#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through the binary tree using
 * pre-order traversal.
 * @tree: The binary tree
 * @func: a pointer to a function to call for each node.
 *
 * Return: NULL, if tree or func is NULL, else return nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
