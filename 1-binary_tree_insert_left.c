#include <stdio.h>
#include <stlib.h>
#include "binary_trees.h"

/**
 *binary_tree_insert_left - Inserts a node as the left-child of another node.
 *@value: value to store in the the new node
 *@parent: Pointer to the node to insert the left-child in
 *Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}
	binary_tree_t *new node = new_node(value);
	if (new_node == NULL)
		return (NULL);
	if (parent != NULL)
	{
		new_node left->parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	new_node->parent = parent;
	return (new_node);
}
