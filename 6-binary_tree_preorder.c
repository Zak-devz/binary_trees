#include "binary_trees.h"
/**
 * binary_tree_preorder - Traverses a binary tree using pre-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node's value.
 *
 * Description: Performs a pre-order traversal of the binary tree,
 *              calling the provided function on each node's value.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
