#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: The depth of the binary tree, or 0 if the tree is NULL.
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}
