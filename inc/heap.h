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
} heap_t;

heap_t* create_heap(void);

int get_parent_index(heap_t *heap, int i);
int get_left_index(heap_t *heap, int i);
int get_right_index(heap_t *heap, int i);

int value_of(heap_t *heap, int i);

void enqueue(heap_t *heap, int value);
int dequeue(heap_t *heap);

void max_heapify(heap_t *heap, int i);

void heapsort(heap_t *heap);

#endif /* HEAP_H */
