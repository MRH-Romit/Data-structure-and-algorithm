#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool isBipartite(vector<vector<int>>& graph) {
    int n = graph.size();
    vector<int> color(n, -1);
    queue<int> q;

    for (int i = 0; i < n; i++) {
        if (color[i] == -1) {
            color[i] = 0;
            q.push(i);

            while (!q.empty()) {
                int u = q.front();
                q.pop();

                for (int v : graph[u]) {
                    if (color[v] == -1) {
                        color[v] = 1 - color[u];
                        q.push(v);
                    } else if (color[v] == color[u]) {
                        return false;
                    }
                }
            }
        }
    }

    return true;
}

int main() {
    int n = 4; // Number of nodes
    vector<vector<int>> graph(n);
    graph[0] = {1, 3};
    graph[1] = {0, 2};
    graph[2] = {1, 3};
    graph[3] = {0, 2};

    if (isBipartite(graph))
        cout << "Graph is bipartite" << endl;
    else
        cout << "Graph is not bipartite" << endl;

    return 0;
}