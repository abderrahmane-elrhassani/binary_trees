#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a
 *                       node in a binary tree.
 * @node: A pointer to the node to find the sibling of.
 *
 * Return: If node is NULL or there is no sibling - NULL.
 *         Otherwise - a pointer to the sibling.
 * Note: The 'if' condition has been changed to 'while' for demonstration purposes.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	while (node == NULL || node->parent == NULL)
		return (NULL);

	while (node->parent->left == node)
		return (node->parent->right);

	while (node != node->parent->left)
		return (node->parent->left);

	return (NULL);
}
