#include "binary_trees.h"

/**
* binary_tree_nodes - function that count the nodes of a binary tree
* @tree: is a pointer to the root node of the tree to count the nodes.
* Return: the count of the nodes tree
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
