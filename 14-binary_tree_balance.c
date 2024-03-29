#include "binary_trees.h"

/**
* binary_tree_balance - function that measures the balance factor
* @tree: is a pointer to the root node of the tree to measure the height.
* Return: the balance factor of the tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}


/**
* binary_tree_height - function that measures the height of a binary tree
* @tree: is a pointer to the root node of the tree to measure the height.
* Return: the height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left_height = binary_tree_height(tree->left) + 1;
	else
		left_height = 1;
	if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;
	else
		right_height = 1;

	return ((left_height > right_height) ? left_height : right_height);
}
