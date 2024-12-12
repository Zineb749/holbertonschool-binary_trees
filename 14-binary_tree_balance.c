#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - check if the tree is balanced.
 * @tree: pointer to the root node of the tree to count the leaves
 *
 * Return: the number of leaves or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
