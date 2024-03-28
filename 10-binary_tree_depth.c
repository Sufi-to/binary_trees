#include "binary_trees.h"
/**
 * binary_tree_depth - measure the depth of a node in a
 * binary tree
 * @tree: A pointer to the node to measure the depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return 0;
	else {
		size_t lst = binary_tree_depth(tree->left);
		size_t rst = binary_tree_depth(tree->right);

		if (lst > rst)
			return (lst + 1);
		else
			return (rst + 1);
	}
}
