#include <iostream>
using namespace std;

int a[101][101];
int b[101][101];
int row, column;

void input() {
    cin >> row >> column;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> a[i][j];
        }
    }   

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> b[i][j];
        }
    }
}

void addMetrix() {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << a[i][j] + b[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main() {
    input();
    addMetrix();
}