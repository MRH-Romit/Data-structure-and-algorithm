#include <iostream>

using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void quicksort(int arr[], int first, int last) {
    if (first < last) {
        int pivot = first;
        int i = first;
        int j = last;
        while (i < j) {
            while (arr[i] <= arr[pivot] && i < last) {
                i++;
            }
            while (arr[j] > arr[pivot]) {
                j--;
            }
            if (i < j) {
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[pivot], arr[j]);
        quicksort(arr, first, j - 1);
        quicksort(arr, j + 1, last);
    }
}








// worst case time complexity of quick sort is O(n^2) if the pivot element is the smallest or largest element in the array
// best case time complexity is O(nlogn) if the pivot element is the median element in the array 