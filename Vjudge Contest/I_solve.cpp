#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


const double EPS = 1e-7; 
const double PI = acos(-1.0);

double calculateDisplacement(double L, double n, double C) {
    if (n == 0 || C == 0) {
        return 0.0; 
    }

    
    double L_prime = (1 + n * C) * L;

  
    double low = L / 2.0, high = 1e9, R = 0;
    while (high - low > EPS) {
        R = (low + high) / 2.0;
        double theta = 2.0 * asin(L / (2.0 * R));
        double arc_length = R * theta;

        if (arc_length < L_prime) {
            low = R;
        } else {
            high = R;
        }
    }


    double h = R - sqrt(R * R - (L / 2.0) * (L / 2.0));
    return h;
}

int main() {
    int T; 
    cin >> T;

    cout << fixed << setprecision(9);

    for (int t = 1; t <= T; t++) {
        double L, n, C;
        cin >> L >> n >> C;

        double h = calculateDisplacement(L, n, C);
        cout << "Case " << t << ": " << h << endl;
    }

    return 0;
}
