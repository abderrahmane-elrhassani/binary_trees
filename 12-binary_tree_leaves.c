#include "binary_trees.h"

/**
 * binary_tree_leaves - function that  counts the leaves in a binary tree.
 * @tree: pointer to the root tree of the tree to count the no. of leaves.
 *
 * Return: number of leaves. If tree is NULL the function must return 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t leaves = 0;

    while (tree)
    {
        leaves += (!tree->left && !tree->right) ? 1 : 0;
        leaves += binary_tree_leaves(tree->left);
        leaves += binary_tree_leaves(tree->right);
        break;
    }
    return (leaves);
}
