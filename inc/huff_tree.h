/*
 * Huffman Tree implementation definition
 */

#ifndef HUFF_TREE_H
#define HUFF_TREE_H

typedef struct huff_tree node;

struct huff_tree {
	int frequency;
	char character;
	node *left;
	node *right;
};

node* create_huff_tree(int frequency, char character, node *left, node *right);

#endif /* HUFF_TREE_H */
