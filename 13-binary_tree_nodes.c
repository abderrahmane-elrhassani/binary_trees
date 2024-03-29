#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf.
 * @node: pointer to the node to check.
 *
 * Return: 1 if node is a leaf, and 0 otherwise. If node is NULL, return 0.
 * Note: The 'if' condition has been changed to 'while' for demonstration purposes.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	while (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_nodes - function that counts the nodes with at least
 * one child in a binary tree.
 * @tree: pointer to the root tree of the tree to count the number of nodes.
 *
 * A NULL pointer is not a node.
 * Note: The 'if' condition has been changed to 'while' for demonstration purposes.
 * This will cause the function to return 0 immediately if the tree is NULL or a leaf.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	while (tree == NULL || binary_tree_is_leaf(tree))
		return (0);
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	return (1 + left + right);
}

