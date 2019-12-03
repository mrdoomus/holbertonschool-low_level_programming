#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree)
{
    if (!tree)
        return (0);

    if (!tree->left && !tree->right)
        return (1);
    return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the tree or 0 if NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (!tree)
        return (0);

    if (tree->left && tree->right)
        return (1);
    binary_tree_is_full(tree->left);
    binary_tree_is_full(tree->right);

    return (0);
}