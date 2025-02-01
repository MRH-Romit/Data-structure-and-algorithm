#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void topologicalSortUtil(vector<vector<int>>& graph, int u, vector<bool>& visited, stack<int>& st) {
    visited[u] = true;

    for (int v : graph[u]) {
        if (!visited[v])
            topologicalSortUtil(graph, v, visited, st);
    }

    st.push(u);
}

vector<int> topologicalSort(vector<vector<int>>& graph) {
    int n = graph.size();
    vector<bool> visited(n, false);
    stack<int> st;

    for (int i = 0; i < n; i++)
        if (!visited[i])
            topologicalSortUtil(graph, i, visited, st);

    vector<int> result;
    while (!st.empty()) {
        result.push_back(st.top());
        st.pop();
    }

    return result;
}

int main() {
    int n = 6; // Number of nodes
    vector<vector<int>> graph(n);
    graph[5] = {2, 0};
    graph[4] = {0, 1};
    graph[2] = {3};
    graph[3] = {1};

    vector<int> sorted = topologicalSort(graph);

    cout << "Topological sorting: ";
    for (int u : sorted)
        cout << u << " ";
    cout << endl;

    return 0;
}