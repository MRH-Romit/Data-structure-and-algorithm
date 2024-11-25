#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int T; 
    cin >> T;

    for (int t = 1; t <= T; t++) {
        int n, q;
        cin >> n >> q;

        vector<int> points(n);
        for (int i = 0; i < n; i++) {
            cin >> points[i];
        }

        cout << "Case " << t << ":" << endl;

        for (int i = 0; i < q; i++) {
            int A, B;
            cin >> A >> B;

           
            auto lower = lower_bound(points.begin(), points.end(), A);
            auto upper = upper_bound(points.begin(), points.end(), B);

           
            int count = upper - lower;
            cout << count << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
