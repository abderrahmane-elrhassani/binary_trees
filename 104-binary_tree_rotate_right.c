#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree.
 * @tree: pointer to the root node of the tree to rotate.
 *
 * Return: pointer to the new root node of the tree once rotated.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
    binary_tree_t *new_root;

    if (!tree)
        return (NULL);

    /*
     * If the tree is not empty, create a new_root variable and set it to
     * the left child of the tree.
     */
    new_root = tree->left;

    while (new_root->right)
    {
        new_root = new_root->right;
    }

    tree->left = new_root->right;

    /*
     * If the right child of the new_root is not empty, set the parent of the
     * right child of the new_root to the tree.
     */
    if (new_root->right)
        new_root->right->parent = tree;

    new_root->right = tree;
    new_root->parent = tree->parent;
    tree->parent = new_root;

    return (new_root);
}
