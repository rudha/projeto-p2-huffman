/*
 * Heap implementation definition -- prototype
 */

#ifndef HEAP_H
#define HEAP_H

/* The heap can potentially hold all ASCII characters */
#define MAX_HEAP_SIZE 128

typedef struct heap {
	int size;
	int data[MAX_HEAP_SIZE];
} heap;

heap* create_heap(void);

int get_parent_index(heap *heap, int i);
int get_left_index(heap *heap, int i);
int get_right_index(heap *heap, int i);

int value_of(heap *heap, int i);

void enqueue(heap *heap, int value);
int dequeue(heap *heap);

void max_heapify(heap *heap, int i);

void heapsort(heap *heap);

#endif /* HEAP_H */
