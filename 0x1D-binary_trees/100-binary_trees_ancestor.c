#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the tree or 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right = 1 + binary_tree_height(tree->right);

	if (left > right)
		return (left);
	return (right);
}

/**
 * binary_trees_ancestor - function that finds the lowest
 * common ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: pointer to the lowest common ancestor node of the
 * two given nodes
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);

	if (first->parent->n == second->n)
		return (first->parent);
	else if (second->parent->n == first->n)
		return (second->parent);

	if (binary_tree_height(first) > binary_tree_height(second) ||
	binary_tree_height(first) == binary_tree_height(second))
		return (first->parent);
	else if (binary_tree_height(first) < binary_tree_height(second))
		return (second->parent);

	return (NULL);
}
