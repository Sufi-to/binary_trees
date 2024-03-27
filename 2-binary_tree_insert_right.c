#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of
 * another node
 * @parent: pointer to the node to insert the right-child in
 * @value: integer to store in the new node
 * Return: pointer to the new node or or NULL on failure or Null
 * if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	right_child = binary_tree_node(parent, value);
	if (!right_child)
		return (NULL);

	if (parent->right != NULL)
	{
		right_child->right = parent->right;
		parent->right->parent = right_child;
	}
	parent->right = right_child;

	return (right_child);
}
