#include <vector>
#include <queue>
using namespace std;

// int m, n;
// bool visited[101][101] = {0};
// int bfsMap[101][101] = {0};
// queue<pair<int, int>> q;

// int solution(vector<vector<int> > maps)
// {
//     int answer = 0;
    
//     m = maps.size();
//     n = maps[0].size();
    
//     q.push(make_pair(0, 0));
//     visited[0][0] = true;
//     bfsMap[0][0] = 1;
    
//     int dx[4] = {0, 0, -1, 1};
//     int dy[4] = {1, -1, 0, 0};
    
//     while (!q.empty()) {
//         int curX = q.front().first;
//         int curY = q.front().second;  
//         q.pop();
        
//         for (int i = 0; i < 4; i++) {
//             int nx = curX + dx[i];
//             int ny = curY + dy[i];
            
//             if (nx < 0 || nx >= m || ny < 0 || ny >= n) {
//                 continue;
//             }
//             if (maps[nx][ny] == 0) {
//                 continue;
//             }
//             if (visited[nx][ny]) {
//                 continue;
//             }
            
//             visited[nx][ny] = true;
//             q.push(make_pair(nx, ny));
//             bfsMap[nx][ny] = bfsMap[curX][curY] + 1;
//         }
//     }
    
//     if (visited[m-1][n-1] == 0) {
//         answer = -1;
//     }
//     else {
//         answer = bfsMap[m-1][m-1];
//     }
    
//     return answer;
// }

int m,n; //행,열
int dir[4][2]={{-1,0},{1,0},{0,1},{0,-1}};
bool visited[101][101];
int dist[101][101];
queue<pair<int,int>> q;
 
int solution(vector<vector<int>> maps)
{
    int answer = 0;
    int m = maps.size(); //행 개수
    int n = maps[0].size(); //열 개수
 
    visited[0][0] = true;
    q.push({0,0});
    dist[0][0] = 1;
    
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for(int i=0;i<4;i++){
            int nx = x + dir[i][0];
            int ny = y + dir[i][1];
            if(nx<0 || nx>=m || ny<0 || ny>=n)
                continue;
            if(visited[nx][ny])
                continue;
            if(maps[nx][ny]==0)
               continue; 
 
            visited[nx][ny] = true;
            q.push({nx,ny});
            dist[nx][ny] = dist[x][y] + 1;
 
        }
    }
 
    if(dist[m-1][n-1]==0){
        answer = -1;
    }else{
        answer = dist[m-1][n-1];
    }
    
    return answer;
}
