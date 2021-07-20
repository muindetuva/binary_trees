#include "binary_trees.h"
/**
  * binary_tree_insert_left - Inserts a node as the left-child of another node
  * @parent: Pointer to the node to insert the left-child in
  * @value: The value to store in the new node
  *
  * Return: A pointer to the created node, or NULL on failure or if parent is 
  * NULL
  */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *current;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = new_node;
	}
	else
	{
		/*The parent node is not null so we have to figure out at what
		 * point exactly to add the node because the node with the
		 * smaller value has to be on the left so i.e if the parent has
		 * one node on the left whose value is smaller than the value of
		 * the node we want to add we will have to push the parent's
		 * left node lower and then make our new node the child of the
		 * parent node
		 */
	}

	return (new_node);
}
