#include "binary_trees.h"
/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 if tree is null or size_t if not
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		size_t lst = binary_tree_height(tree->left);
		size_t rst = binary_tree_height(tree->right);

		if (lst > rst)
		{
			return (lst + 1);
		}
		else
		{
			return (rst + 1);
		}
	}
}
