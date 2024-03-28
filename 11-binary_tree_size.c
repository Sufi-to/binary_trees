#include "binary_trees.h"
/**
 * binary_tree_size - measure the size of binary tree
 * @tree: root node of the tree to measure
 * Return: NULL if tree is null or number of nodes
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lst, rst;

	if (tree == NULL)
	{
		return (0);
	}
	lst = binary_tree_size(tree->left);
	rst = binary_tree_size(tree->right);
	return (lst + rst + 1);
}
