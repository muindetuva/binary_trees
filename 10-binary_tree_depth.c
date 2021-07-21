#include "binary_trees.h"
/**
  * binary_tree_depth - finds depth of node
  * @tree: pointer to node to measure depth
  *
  * Return: depth of node
  */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);

	height = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;

	return (height);
}
