#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T; 
    cin >> T;

    for (int t = 1; t <= T; t++) {
        int n, P, Q;
        cin >> n >> P >> Q;

        vector<int> weights(n);
        for (int i = 0; i < n; i++) {
            cin >> weights[i];
        }

        
        int totalWeight = 0, eggCount = 0;

    
        for (int i = 0; i < n; i++) {
            if (eggCount + 1 <= P && totalWeight + weights[i] <= Q) {
                eggCount++;
                totalWeight += weights[i];
            } else {
                break; 
            }
        }

 
        cout << "Case " << t << ": " << eggCount << endl;
    }

    return 0;
}
