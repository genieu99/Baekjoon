#include <iostream>
#include <queue>
#include <string.h>
#define MAX 101
using namespace std;

int width, length;
int maze[MAX][MAX];
bool visited[MAX][MAX];
int dist[MAX][MAX];
int x_dir[4] = {-1, 1, 0, 0};
int y_dir[4] = {0, 0, -1, 1};
queue<pair<int, int>> q;

void BFS(int start_x, int start_y);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> width >> length;

    for (int i = 0; i < width; i++) {
        string row;
        cin >> row;

        for (int j = 0; j < length; j++) {
            maze[i][j] = row[j] - '0';
        }
    }

    BFS(0, 0);
    cout << dist[width - 1][length - 1];
}

void BFS(int start_x, int start_y) {
    visited[start_x][start_y] = true;
    q.push(make_pair(start_x, start_y));
    dist[start_x][start_y]++;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int x_new = x + x_dir[i];
            int y_new = y + y_dir[i];

            if ((0 <= x_new && x_new < width) && (0 <= y_new && y_new < length) && !visited[x_new][y_new] && maze[x_new][y_new] == 1) {
                visited[x_new][y_new] = true;
                q.push(make_pair(x_new, y_new));
                dist[x_new][y_new] = dist[x][y] + 1;
            }
        }
    }
}