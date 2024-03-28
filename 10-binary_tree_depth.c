#include "binary_trees.h"
/**
 * binary_tree_depth - measure the depth of a node in a
 * binary tree
 * @tree: A pointer to the node to measure the depth
 * Return: null if tree is null or depth of node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tdepth;

	if (tree == NULL)
	{
		return (0);
	}
	tdepth = 0;
	while (tree->parent)
	{
		tdepth += 1;
		tree = tree->parent;
	}
	return (tdepth);
}
