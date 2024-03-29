#include <vector>
#include <queue>
using namespace std;

int m, n;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
bool visited[101][101] = {0};
int bfsMap[101][101] = {0};
queue<pair<int, int>> q;

int solution(vector<vector<int>> maps) {
    int answer = 0;
    int m = maps.size();
    int n = maps[0].size();
 
    visited[0][0] = true;
    q.push(make_pair(0,0));
    bfsMap[0][0] = 1;
    
    while(!q.empty()){
        int curX = q.front().first;
        int curY = q.front().second;
        q.pop();
        
        for (int i=0;i < 4; i++){
            int nx = curX + dx[i];
            int ny = curY + dy[i];
            
            if (nx < 0 || nx >= m || ny < 0 || ny >= n) {
                continue;
            }
            if (visited[nx][ny]) {
                continue;
            }
            if (maps[nx][ny]==0) {
               continue; 
            }
 
            visited[nx][ny] = true;
            q.push(make_pair(nx,ny));
            bfsMap[nx][ny] = bfsMap[curX][curY] + 1;
        }
    }
 
    if (bfsMap[m-1][n-1] == 0) {
        answer = -1;
    }
    else {
        answer = bfsMap[m-1][n-1];
    }
    
    return answer;
}
