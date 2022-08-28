#include <bits/stdc++.h>
using namespace std;

void topologicalSort(vector <int> adj[], int src, int n) {
    vector <int> indegree(n, 0);
    vector <bool> visited(n, false);
    for (int i = 0; i < n; i++) {
        for (int j: adj[i]) {
            indegree[j]++;
        }
    }
    queue <int> q;
    // For directed Acyclic graph only ->
    for (int i = 0; i < n; i++) {
        if (indegree[i] == 0) 
            q.push(i);
    }
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        visited[curr] = true;
        for (int i: adj[curr]) {
            indegree[i]--;
            if (indegree[i] == 0 and visited[i] == false)
                q.push(i);
        }
    }
}

int main() {
    int n = 5;
    vector <int> adj[n];  // ==> When the nodes have values starting from 0
    // vector <int> adj[n+1] ==> when the nodes have values starting from 1
    // map<int, vector <int>> adj  ==> when the nodes take any random value

    return 0;
}
