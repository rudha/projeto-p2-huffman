/*
 * Huffman tree implementation
 */

#include <stdlib.h> /* malloc() */
#include "../inc/huff_tree.h"

node* create_huff_tree(int frequency, char character, node *left, node *right)
{
	node *huff_tree = (node*) malloc(sizeof(node));
	huff_tree->frequency = frequency;
	huff_tree->left = left;
	huff_tree->right = right;
	return huff_tree;
}
