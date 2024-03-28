#include "binary_trees.h"

/**
 * Creates a new binary tree node.
 *
 * @parent: A pointer to the parent node where the new node will be attached.
 * @value: The value to be assigned to the new node.
 *
 * This function initializes a node without any children.
 *
 * Return: A pointer to the newly created node, or NULL if creation fails.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_abdo;

	new_abdo = malloc(sizeof(binary_tree_t));
	if (new_abdo == NULL)
		return (NULL);

	new_abdo->n = value;
	new_abdo->right = NULL;
        new_abdo->parent = parent;
	new_abdo->left = NULL;


	return (new_abdo);
}
