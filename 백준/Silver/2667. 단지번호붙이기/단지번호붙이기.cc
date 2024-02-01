#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

#define MAX 25

using namespace std;

int houses;
int map[MAX][MAX];
bool visited[MAX][MAX];
vector<int> town;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
void BFS(int row, int column);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> houses;

    for (int i = 0; i < houses; i++) {
        string line;
        cin >> line;
        for (int j = 0; j < houses; j++) {
            map[i][j] = line[j] - '0';
        }
    }

    for (int i = 0; i < houses; i++) {
        for (int j = 0; j < houses; j++) {
            if (visited[i][j] == false && map[i][j] == 1) {
                BFS(i, j);
            }
        }
    }

    sort(town.begin(), town.end());
    cout << town.size() << '\n';

    for (int i = 0; i < town.size(); i++) {
        cout << town[i] << '\n';
    }
}

void BFS(int row, int column) {
    queue<pair<int, int>> q;
    q.push(make_pair(row, column));
    visited[row][column] = true;

    int cnt = 0;
    cnt++;

    while (!q.empty()) {
        int front_x = q.front().first;
        int front_y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int next_x = front_x + dx[i];
            int next_y = front_y + dy[i];
            
            if ((0 <= next_x && next_x < houses) && (0 <= next_y && next_y < houses) && !visited[next_x][next_y] && map[next_x][next_y] == 1) {
                q.push(make_pair(next_x, next_y));
                visited[next_x][next_y] = true;
                cnt++;
            }
        }
    }
    town.push_back(cnt);
}