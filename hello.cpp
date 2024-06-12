#include <iostream>
using namespace std;


void scanArray(int array[], int n){

    for (int i=0; i<n; i++){
        cout << "enter element " << i+1 << ": ";
        cin >> array[i];
    }
}
void printArray(int array[], int n){
    cout << "array elements are:\n";
    for (int i=0; i<n; i++){
        cout << array[i] << " emo otori\n";
    }

}

int main() {

   cout << "enter array size: " << "\n";
    int n;
    cin >> n;
    int* array = new int[n];

scanArray(array, n);
printArray(array, n);

    return 0;
}