#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int>>& graph, int u, vector<bool>& visited, int& count) {
    visited[u] = true;
    count++;

    for (int v : graph[u]) {
        if (!visited[v])
            dfs(graph, v, visited, count);
    }
}

int countNodes(vector<vector<int>>& graph, int u) {
    int n = graph.size();
    vector<bool> visited(n, false);
    int count = 0;

    dfs(graph, u, visited, count);

    return count;
}

int main() {
    int n = 5; // Number of nodes
    vector<vector<int>> graph(n);
    graph[0] = {1, 2};
    graph[1] = {0, 3};
    graph[2] = {0, 4};
    graph[3] = {1};
    graph[4] = {2};

    int u = 0;
    int count = countNodes(graph, u);

    cout << "Number of nodes in the component: " << count << endl;

    return 0;
}