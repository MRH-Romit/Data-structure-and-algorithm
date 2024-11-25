#include <iostream>
using namespace std;

int numSwap = 0;
void bubbleSort(int arr[], int n, int &firstElement, int &lastElement) {
    
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                numSwap++;
            }
        }
    }
    
    firstElement = arr[0];
    lastElement = arr[n-1];
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void scanArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    scanArray(arr, n);
    
    int firstElement, lastElement;
    bubbleSort(arr, n, firstElement, lastElement);

    cout << "Array is sorted in " << numSwap << " swaps." << endl;
    cout << "First Element: " << firstElement << endl;
    cout << "Last Element: " << lastElement << endl;
    
    return 0;
}
