#include <iostream>
using namespace std;

struct MaxHeap
{
    int *arr;
    int size;
    int capacity;
};

void CreateMaxHeap(struct MaxHeap *h, int c)
{
    h->size = 0;
    h->capacity = c;
    h->arr = (int *)malloc(c * sizeof(int));
}

int left(int i) { return (2 * i); }
int right(int i) { return (2 * i + 1); }
int parent(int i) { return (i / 2); }

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

void insert(struct MaxHeap *h, int size, int value)
{
    if (h->size == h->capacity)
    {
        cout << "Capacity Full";
    }
    else
    {
        size = size + 1;
        h->arr[size] = value;
        int i = size;

        while (i > 1)
        {
            if (h->arr[parent(i)] < h->arr[size])
            {
                swap(h->arr[parent(i)], h->arr[size]);
                i = parent(i);
            }
            else
            {
                return;
            }
        }
    }
}

void Heap_Traversal(struct MaxHeap*h) {
    for (int i = 0; i < h->size; i++)
    {
        cout<<h->arr[i]<<endl;
    }
}

int main()
{
    struct MaxHeap heap;
    CreateMaxHeap(&heap, 6);
    insert(&heap, heap.size, 3);
    insert(&heap, heap.size, 2);
    insert(&heap, heap.size, 15);
    insert(&heap, heap.size, 20);
    Heap_Traversal(&heap);
    return 0;
}