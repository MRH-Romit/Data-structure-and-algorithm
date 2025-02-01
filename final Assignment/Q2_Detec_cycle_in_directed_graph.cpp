#include <iostream>
#include <vector>

using namespace std;

bool isCyclicUtil(vector<vector<int>>& graph, int u, vector<bool>& visited, vector<bool>& recStack) {
    if (!visited[u]) {
        visited[u] = true;
        recStack[u] = true;

        for (int v : graph[u]) {
            if (!visited[v] && isCyclicUtil(graph, v, visited, recStack))
                return true;
            else if (recStack[v])
                return true;
        }
    }
    recStack[u] = false;
    return false;
}

bool isCyclic(vector<vector<int>>& graph) {
    int n = graph.size();
    vector<bool> visited(n, false);
    vector<bool> recStack(n, false);

    for (int i = 0; i < n; i++)
        if (isCyclicUtil(graph, i, visited, recStack))
            return true;

    return false;
}

int main() {
    int n = 4; // Number of nodes
    vector<vector<int>> graph(n);
    graph[0] = {1};
    graph[1] = {2};
    graph[2] = {0, 3};
    graph[3] = {3};

    if (isCyclic(graph))
        cout << "Graph contains cycle" << endl;
    else
        cout << "Graph doesn't contain cycle" << endl;

    return 0;
}