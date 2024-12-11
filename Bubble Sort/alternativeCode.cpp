// best case of bubble sort is O(n) when the array is already sorted.
// worst case is O(n^2) when the array is sorted in reverse order.
// average case is O(n^2).

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void ScanArray(int arr[], int size) {
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}


int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    ScanArray(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}