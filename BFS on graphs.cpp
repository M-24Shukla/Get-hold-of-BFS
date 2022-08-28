#include <bits/stdc++.h>
using namespace std;

void bfs(vector <int> adj[], int src, int n) {
    queue <int> q;
    q.push(src);
    vector <bool> visited(n, false);
    while (!q.empty()) {
        int c = q.size();
        while (c--) {
            int curr = q.front();
            q.pop();
            visited[curr] = true;
            for (int i: adj[src]) {
                if (!visited[i]) {
                    q.push(i);
                }
            }
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
