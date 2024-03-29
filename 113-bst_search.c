#include "binary_trees.h"
/**
 * bst_search - Searches for a value in a Binary Search Tree.
 * @tree: Pointer to the root node of the BST to search.
 * @value: Value to search for in the tree.
 *
 * Returns: Pointer to the node containing a value equal to @value,
 *          or NULL if not found.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
    while (tree)
    {
        if (value == tree->n)
            return ((bst_t *)tree);
        else if (value < tree->n)
            tree = tree->left;
        else
            tree = tree->right;
    }

    return (NULL);
}
