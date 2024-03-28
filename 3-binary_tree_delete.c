#include "binary_trees.h"

/**
 * Deletes an entire binary tree.
 *
 * @tree: A pointer to the root node of the tree that will be deleted.
 *
 * This function will perform no action if the tree is NULL.
 */

void binary_tree_delete(binary_tree_t *tree)
{
    while (tree != NULL)
    {
        binary_tree_delete(tree->left);
        binary_tree_delete(tree->right);
        free(tree);
        tree = NULL;
    }
}
