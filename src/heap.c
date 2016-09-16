/*
 * Heap implementation -- prototype
 */

#include <stdio.h>
#include "../inc/heap.h"


/*
 * Not finished*, find a better implementation
 */
heap create_heap(void)
{
	heap->size = 0;
	return heap;
}


int get_parent_index(heap *heap, int i)
{
	return i / 2;
}

int get_left_index(heap *heap, int i)
{
	return 2 * i;
}

int get_right_index(heap *heap, int i)
{
	return 2 * i + 1;
}


/*
 * Can return garbage if heap->data[i] is not defined, see create_heap()
 */
int value_of(heap *heap, int i)
{
	return heap->data[i];
}


/*
 * Function to swap two int values, used in enqueue(), max_heapify() and
 * heapsort()
 */
void swap(int *a, int *b)
{
	int *aux;
	aux = a;
	a = b;
	b = aux;
}


void enqueue(heap *heap, int value)
{
	if (heap->size >= MAX_HEAP_SIZE) {
		printf("Heap is full!");

	} else {
		heap->data[++heap->size] = value;
		int key_index = heap->size;
		int parent_index = get_parent_index(heap, heap->size);
		while (parent_index >= 1 && heap->data[key_index] >
		       heap->data[parent_index]) {
			swap(&heap->data[key_index],
			     &heap->data[parent_index]);
			key_index = parent_index;
			parent_index = get_parent_index(heap, key_index);
		}
	}
}

int dequeue(heap *heap)
{
	int value = heap->data[1];
	heap->data[1] = heap->data[heap->size];
	heap->size--;
	max_heapify(heap, 1);
	return value;
}


void max_heapify(heap *heap, int i)
{
	int largest;
	int left_index = get_left_index(heap, i);
	int right_index = get_right_index(heap, i);
	if (left_index <= heap->size && heap->data[left_index] >
	    heap->data[i]) {
		largest = left_index;
	} else {
		largest = i;
	}

	if (right_index <= heap->size && heap->data[right_index] >
	    heap->data[largest]) {
		largest = right_index;
	}

	if (heap->data[i] != heap->data[largest]) {
		swap(&heap->data[i], &heap->data[largest]);
		max_heapify(heap, largest);
	}
}


void heapsort(heap *heap)
{
	int i;
	for (i = heap->size; i >= 2; i--) {
	swap(&heap->data[1], &heap->data[i]);
	heap->size--;
	max_heapify(heap, 1);
	}
}
