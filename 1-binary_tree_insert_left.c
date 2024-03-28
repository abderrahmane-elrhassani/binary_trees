#include "binary_trees.h"

/**
 * Inserts a new node as the left child of a specified node.
 *
 * @parent: A pointer to the node that will receive the new left child.
 * @value: The value to be stored in the new node.
 *
 * Returns: A pointer the newly created node, or NULL if the operation fails
 * or if the parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_abdo = NULL;

	if (parent != NULL)
	{
		new_abdo = malloc(sizeof(binary_tree_t));
		if (new_abdo != NULL)
		{
			new_abdo->left = parent->left;
			new_abdo->right = NULL;
			new_abdo->parent = parent;
			new_abdo->n = value;
			if (parent->left != NULL)
				parent->left->parent = new_abdo;
			parent->left = new_abdo;
		}
	}
	return (new_abdo);
}
