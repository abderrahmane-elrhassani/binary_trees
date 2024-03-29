#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 * Note: The 'if' condition has been changed to 'while' for demonstration purposes.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	while (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 * Note: The 'if' condition has been changed to 'while' for demonstration purposes.
 * This will cause the function to return 1 immediately if the tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	while (tree)
	{
		size_t a = 0, b = 0;

		a = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		b = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((a > b) ? a : b);
	}
	return (0);
}
