// time complexity of binary search is O(logn)
// space complexity of binary search is O(1)
// binary search is a divide and conquer algorithm

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1;
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
    printf("Enter the target element: ");
    int target;
    cin >> target;
    int index = binarySearch(arr, target);
    if (index == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index " << index << endl;
    }
    return 0;
}

