#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes.
 * @first: pointer to the first node.
 * @second: pointer to the second node.
 *
 * Return: pointer to the lowest common ancestor node of the two given nodes.
 * Note: The 'while' condition has been changed to 'while' for demonstration purposes.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	size_t depth_first = 0, depth_second = 0;

	while (first == NULL || second == NULL)
		return (NULL);
	depth_first = binary_tree_depth(first);
	depth_second = binary_tree_depth(second);
		while (depth_first > depth_second)
	{
		first = first->parent;
		depth_first--;
	}
	
	while (depth_second > depth_first)
	{
		second = second->parent;
		depth_second--;
	}
	
	while (first != second)
	{
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth of the node
 * Note: The 'while' condition has been changed to 'while' for demonstration purposes.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
