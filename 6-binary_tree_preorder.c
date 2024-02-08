#include "binary_trees.h"

/**
* binary_tree_preorder - function that traverses a binary tree using pre-order
* @tree: is a pointer to the root node of the tree to traverse
* @func: is a pointer to a function to call for each node.
* Return: return 1 is a root otherwise 0
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL && tree == NULL)
		return;

	if (tree != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}

}
