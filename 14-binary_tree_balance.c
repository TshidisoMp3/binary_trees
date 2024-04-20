#include "binary_trees.h"

/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: pointer to the root node of the tree to measure the balance factor
* Return: balance factor of the tree
*/

int binary_tree_balance(const binary_tree_t *tree)
{
    int left_height = 0;
    int right_height = 0;

    if (tree == NULL)
        return (0);

    if (tree->left)
        left_height = 1 + binary_tree_height(tree->left);
    if (tree->right)
        right_height = 1 + binary_tree_height(tree->right);

    return (left_height - right_height);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height = 0;
    size_t right_height = 0;

    if (tree == NULL)
        return (0);

    if (tree->left)
        left_height = 1 + binary_tree_height(tree->left);
    if (tree->right)
        right_height = 1 + binary_tree_height(tree->right);

    if (left_height > right_height)
        return (left_height);
    else
        return (right_height