#include "binary_trees.h"

/**
 * Determines if a given node is a leaf in a binary tree.
 *
 * @node: A pointer to the node under examination.
 *
 * Returns: 1 if the node is a leaf, 0 if it is not a leaf or if the node is NULL.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	int n = 0;

	if (node != NULL)
	{
		n = ((node->left == NULL) && (node->right == NULL) ? 1 : 0);
	}
	return (n);
}
