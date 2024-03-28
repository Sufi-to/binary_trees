#include "binary_trees.h"

/**
 * binary_tree_sibling - find if the sibling has a node
 *
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling
 * 		return null if parent or node is null
 *		return null if node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}
