#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string WB[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

string BW[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

string chessBoard[50];
int changeWB(int x, int y);
int changeBW(int x, int y);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int width, height, minCount = 65;
    cin >> width >> height;
    cin.ignore();
    
    for (int i = 0; i < width; i++) {
        getline(cin, chessBoard[i]);
    }

    for (int i = 0; i + 8 <= width; i++) {
        for (int j = 0; j + 8 <= height; j++) {
            int tmp = min(changeWB(i, j), changeBW(i, j));
            if (tmp < minCount) {
                minCount = tmp;
            }
        }
    }
    cout << minCount;
}

int changeWB(int x, int y) {
    int changeCount = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (chessBoard[x + i][y + j] != WB[i][j]) {
                changeCount++;
            }
        }
    }
    return changeCount;
}

int changeBW(int x, int y) {
    int changeCount = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (chessBoard[x + i][y + j] != BW[i][j]) {
                changeCount++;
            }
        }
    }
    return changeCount;
}