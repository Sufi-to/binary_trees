#include "binary_trees.h"
/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 if tree is null or size_t if not
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t lst = 0;
		size_t rst = 0;

		if (tree->left)
		{
			lst = 1 + binary_tree_height(tree->left);
		}
		else
		{
			lst = 0;
		}

		if (tree->right)
		{
			rst = 1 + binary_tree_height(tree->right);
		}
		else
		{
			rst = 0;
		}

		if (lst > rst)
		{
			return (lst);
		}
		else
		{
			return (rst);
		}
	}
}
