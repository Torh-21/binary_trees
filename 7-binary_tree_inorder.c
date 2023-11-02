#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through the binary tree using in-order traversal.
 * @tree: The binary tree
 * @func: a pointer to a function to call for each node.
 *
 * Return: NULL, if tree or func is NULL, else return nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;

binary_tree_inorder(tree->left, func);
func(tree->n)
binary_tree_inorder(tree->right, func);
}
