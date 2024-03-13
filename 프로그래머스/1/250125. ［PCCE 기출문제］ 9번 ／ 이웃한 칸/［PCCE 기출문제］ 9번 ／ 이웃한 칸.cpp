#include <string>
#include <vector>
using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    int dh[] = {-1, 1, 0, 0};
    int dw[] = {0, 0, 1, -1};
    
    for (int i = 0; i < 4; i++) {
        int nh = h + dh[i];
        int nw = w + dw[i];
        
        if (nh < 0 or nw <0 or nh >= board.size() or nw >= board.size())
            continue;
        if (board[nh][nw] == board[h][w])
            answer++;
    }
    return answer;
}