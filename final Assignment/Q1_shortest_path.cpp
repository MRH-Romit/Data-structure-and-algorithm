#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> shortestPath(vector<vector<int>>& graph, int s, int t) {
    int n = graph.size();
    vector<int> dist(n, -1);
    queue<int> q;
    q.push(s);
    dist[s] = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : graph[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }

    return dist;
}

int main() {
    int n = 5; // Number of nodes
    vector<vector<int>> graph(n);
    graph[0] = {1, 2};
    graph[1] = {0, 3};
    graph[2] = {0, 4};
    graph[3] = {1};
    graph[4] = {2};

    int s = 0, t = 3;
    vector<int> dist = shortestPath(graph, s, t);

    cout << "Shortest distance from " << s << " to " << t << " is " << dist[t] << endl;

    return 0;
}