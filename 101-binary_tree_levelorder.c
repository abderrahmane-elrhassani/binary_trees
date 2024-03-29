#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_levelorder - goes through a binary tree using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node's value
 */
void levelorder_helper(const binary_tree_t *tree, void (*func)(int), size_t level);
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    size_t h = binary_tree_height(tree);
    for (size_t i = 0; i <= h; i++)
        levelorder_helper(tree, func, i);
}

/**
 * levelorder_helper - helper function to print nodes at a given level
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node's value
 * @level: level to print
 */
void levelorder_helper(const binary_tree_t *tree, void (*func)(int), size_t level)
{
    if (tree == NULL)
        return;
    if (level == 0)
        func(tree->n);
    else if (level > 0)
    {
        levelorder_helper(tree->left, func, level - 1);
        levelorder_helper(tree->right, func, level - 1);
    }
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);

    return ((left_height > right_height) ? left_height + 1 : right_height + 1);
}
