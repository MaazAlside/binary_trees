#include "binary_trees.h"


/**
* binary_tree_depth - function that measures the height of a binary tree
* @tree: is a pointer to the root node of the tree to measure the depth.
* Return: the depth of the tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		tree = tree->parent;
		depth++;
	}

	return (depth);

}
