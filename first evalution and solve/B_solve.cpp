#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Player {
    public:
        string name;
        int score;
};

bool comparator( Player &a,  Player &b) {
    if (a.score != b.score) {
        return a.score > b.score; 
    }
    return a.name < b.name; 
}

int main() {
    int n;
    cin >> n;

    Player* players = new Player[n];

    
    for (int i = 0; i < n; i++) {
        cin >> players[i].name >> players[i].score;
    }

    
    sort(players, players + n, comparator);

    
    for (int i = 0; i < n; i++) {
        cout << players[i].name << " " << players[i].score << endl;
    }

   
    delete[] players;

    return 0;
}
