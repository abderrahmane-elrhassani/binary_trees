#include "binary_trees.h"

/**
 * Adds a new node as the right child of a specified parent node.
 *
 * @parent: A pointer to the node to which the new right child will be added.
 * @value: The value to be stored in the new node.
 *
 * If the parent node already has a right child, the new node will replace it,
 * and the existing right child will become the right child of the new node.
 *
 * Returns: A pointer to the newly added node, or NULL if the operation fails
 * or if the parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_abdo = NULL;

	if (parent != NULL)
	{
		new_abdo = malloc(sizeof(binary_tree_t));
		if (new_abdo != NULL)
		{
			new_abdo->left = NULL;
			new_abdo->right = parent->right;
			new_abdo->parent = parent;
			new_abdo->n = value;
			if (parent->right != NULL)
				parent->right->parent = new_abdo;
			parent->right = new_abdo;
		}
	}
	return (new_abdo);
}
