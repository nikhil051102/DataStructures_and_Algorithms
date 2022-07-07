#include<iostream>
using namespace std;

/*
Heap Sort :
1) Heapify the given array to maxHeap 
2) Replace lowest element of maxHeap with its root
3) Again heapify because we have replaced root element of tree.

Time Complexity : O(nlogn)
*/

void maxHeapify(int *arr, int n, int i) {
    int largest = i, left = 2*i+1, right = 2*i+2;

    if(left < n && arr[left] > arr[largest]) {largest = left;}
    if(right < n && arr[right] > arr[largest]) {largest = right;}
    if(largest != i) {
        swap(arr[largest], arr[i]);
        maxHeapify(arr, n, largest);
    }
}

//Time Complexity of BuildHeap = O(n)
void buildHeap(int *arr, int n) {
    for(int i = (n-2)/2; i>=0; i--) {
        maxHeapify(arr, n, i);
    }
}

void heapSort(int *arr, int n) {
    buildHeap(arr, n);
    
    for(int i= n-1; i>=1; i--) {
        swap(arr[0], arr[i]);
        maxHeapify(arr, i, 0);
    }
}

int main()
{
    int arr[] = {10, 15, 50, 4, 20};
    heapSort(arr, 5);

    for(int i = 0; i<5; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}