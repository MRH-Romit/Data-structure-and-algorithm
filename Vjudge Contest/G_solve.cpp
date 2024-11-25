#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N; 
    cin >> N;

    vector<int> heights(N);
    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }

    int Q; 
    cin >> Q;

    vector<int> queries(Q);
    for (int i = 0; i < Q; i++) {
        cin >> queries[i];
    }

    for (int i = 0; i < Q; i++) {
        int luchuHeight = queries[i];

       
        auto shorter = lower_bound(heights.begin(), heights.end(), luchuHeight);
        if (shorter != heights.begin()) {
            shorter--; 
            cout << *shorter << " ";
        } else {
            cout << "X ";
        }

       
        auto taller = upper_bound(heights.begin(), heights.end(), luchuHeight);
        if (taller != heights.end()) {
            cout << *taller << endl;
        } else {
            cout << "X" << endl;
        }
    }

    return 0;
}
