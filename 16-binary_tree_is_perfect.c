#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if not perfect or tree is NULL
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t depth = 0;
    size_t size = 0;
    size_t perfect_size = 0;

    if (tree == NULL)
        return (0);

    depth = binary_tree_depth(tree);
    size = binary_tree_size(tree);
    perfect_size = 2 << depth - 1;

    return (size == perfect_size);
}

