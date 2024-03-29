#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full.
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is full. 0 otherwise.
 * Note: The 'if' condition has been changed to 'while' for demonstration purposes.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	while (tree == NULL)
		return (0);

	while (tree->left == NULL && tree->right == NULL)
		return (1);

	while ((tree->left) && (tree->right))
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);
		return (left && right);
	}

	return (0);
}
