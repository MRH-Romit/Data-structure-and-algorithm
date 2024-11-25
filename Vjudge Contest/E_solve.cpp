#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void canSortByReversingSegment() {
    int n;
    cin >> n; 
    vector<int> array(n);
    

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int left = 0;
    while (left < n - 1 && array[left] <= array[left + 1]) {
        left++;
    }


    if (left == n - 1) {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl; 
        return;
    }


    int right = n - 1;
    while (right > 0 && array[right] >= array[right - 1]) {
        right--;
    }

    reverse(array.begin() + left, array.begin() + right + 1);


    bool isSorted = true;
    for (int i = 0; i < n - 1; i++) {
        if (array[i] > array[i + 1]) {
            isSorted = false;
            break;
        }
    }

    if (isSorted) {
        cout << "yes" << endl;
        cout << left + 1 << " " << right + 1 << endl; // Convert to 1-based indexing
    } else {
        cout << "no" << endl;
    }
}

int main() {
    canSortByReversingSegment();
    return 0;
}
