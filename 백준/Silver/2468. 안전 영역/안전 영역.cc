#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#define MAX 100
using namespace std;

int area;
int input[MAX][MAX];
int map[MAX][MAX];
bool visited[MAX][MAX];
int dr[4] = {-1, 1, 0, 0};
int dc[4] = {0, 0, -1, 1};
vector<int> safeArea;
int cnt;

void bfs(int row, int column);
void reset();

int main(int argc, char** argv) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int maxHeight = -1;
    cin >> area;
    for (int i = 0; i < area; i++) {
        for (int j = 0; j < area; j++) {
            cin >> input[i][j];
            if (input[i][j] > maxHeight) {
                maxHeight = input[i][j];
            }
        }
    }

    for (int h = 1; h <= maxHeight; h++) {
        for (int i = 0; i < area; i++) {
            for (int j = 0; j < area; j++) {
                if (input[i][j] < h) {
                    map[i][j] = 0;
                }
                else {
                    map[i][j] = 1;
                }
            }
        }

        for (int i = 0; i < area; i++) {
            for (int j = 0; j < area; j++) {
                if (visited[i][j] == false && map[i][j] == 1) {
                    bfs(i, j);
                    cnt++;
                }
            }
        }
        safeArea.push_back(cnt);
        reset();
    }

    sort(safeArea.begin(), safeArea.end());
    cout << safeArea.back();
    
    return 0;
}

void bfs(int row, int column) {
    queue<pair<int, int>> q;
    q.push(make_pair(row, column));
    visited[row][column] = true;

    while (!q.empty()) {
        int front_r = q.front().first;
        int front_c = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int next_r = front_r + dr[i];
            int next_c = front_c + dc[i];

            if ((0 <= next_r && next_r < area) && (0 <= next_c && next_c < area) && visited[next_r][next_c] == false && map[next_r][next_c] == 1) {
                q.push(make_pair(next_r, next_c));
                visited[next_r][next_c] = true;
            }
        }
    }
}

void reset() {
    for (int i = 0; i < area; i++) {
        for (int j = 0; j < area; j++) {
            map[i][j] = 0;
            visited[i][j] = 0;
        }
    }
    cnt = 0;
}
