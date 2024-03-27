#include "binary_trees.h"

/**
 * binary_trees_is_leaf - checks if the node is a leaf
 * @node: pointer to the node to check
 * Return: 1 if node is a leaf otherwise 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->right != NULL || node->left != NULL)
		return (0);

	return (1);
}
