#ifndef BST_HEADER_H
#define BST_HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct tree_node tree_node;
typedef struct tree tree;

struct tree
{
	tree_node *root;
};

tree_node *make_node(const int val);
tree *make_tree();
void	insert_node(tree *bst, int val);
tree_node *search(tree *bst, int val);
tree *make_tree_from_array(int *arr, const int size);


struct tree_node
{
	int val;
	tree_node *right;
	tree_node *left;
};

#endif //BST_HEADER_H
