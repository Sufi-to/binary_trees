#include "binary_trees.h"
/**
 * binary_tree_delete - delete the entire binary tree
 * @tree: pointer to the root node
 * Return: Nothing
*/
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *root;

	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
