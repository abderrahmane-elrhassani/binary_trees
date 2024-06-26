#include "binary_trees.h"
/*
 * array_to_bst - Constructs a Binary Search Tree from an array.
 * @array: Pointer to the first element of the array to be converted.
 * @size: Number of elements in the array.
 *
 * If a value of the array is already present in the tree, that value must
 * be ignored.
 *
 * Return: Pointer to the root node of the created BST, or NULL on failure.
 */
bst_t *array_to_bst(int *array, size_t size)
{
    bst_t *root = NULL;
    size_t i;

    if (!array)
        return (NULL);

    for (i = 0; i < size; i++)
        bst_insert(&root, array[i]);

    return (root);
}
