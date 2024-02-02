#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#define MAX 1001
using namespace std;

int node, edge;
bool visited[MAX];
vector<int> vec[MAX];

void bfs(int start);

int main(int argc, char** argv) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int u, v, cnt = 0;
    cin >> node >> edge;
    for (int i = 0; i < edge; i++) {
        cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    for (int i = 1; i <= node; i++) {
        if (visited[i] == 0) {
            bfs(i);
            cnt++;
        }
    }

    cout << cnt;    
    return 0;
}

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        for (int i = 0; i < vec[current].size(); i++) {
            if (visited[vec[current][i]] == false) {
                q.push(vec[current][i]);
                visited[vec[current][i]] = true;
            }
        }
    }
}
