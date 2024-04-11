#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node_1One = NULL;

    	node_1One = malloc(sizeof(binary_tree_t));
        	if (node_1One == NULL)
            		return (NULL);

         	node_1One->n = value;
            node_1One->parent = parent;
            node_1One->left = NULL;
            node_1One->right = NULL;

            return (node_1One);
}
