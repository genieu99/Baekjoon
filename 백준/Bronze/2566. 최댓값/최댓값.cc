#include <iostream>
using namespace std;

int metrix[9][9];

void input() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> metrix[i][j];
        }
    }
}

void findMax() {
    int max = 0;
    int maxRow = 0, maxColumn = 0;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (max < metrix[i][j]) {
                max = metrix[i][j];
                maxRow = i;
                maxColumn = j;
            }
        }
    }

    cout << max << '\n';
    cout << maxRow + 1 << ' ' << maxColumn + 1 << '\n';
}

int main() {
    input();
    findMax();
}