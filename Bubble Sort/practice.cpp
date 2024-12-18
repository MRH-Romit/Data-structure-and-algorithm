// best case of bubble sort is O(n) when the array is already sorted.
// worst case is O(n^2) when the array is sorted in reverse order.
// average case is O(n^2).

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        bool swapped = false;
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    printf("Enter the number of elements: ");
    int n;
    cin >> n;
    vector<int> arr(n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bubbleSort(arr);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}