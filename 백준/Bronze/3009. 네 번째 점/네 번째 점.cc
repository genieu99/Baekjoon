#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

map<int, int> coordinationX;
map<int, int> coordinationY;
void findX(int x);
void findY(int y);
void findCoordination();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 3; i++) {
        int x, y;
        cin >> x >> y;
        findX(x);
        findY(y);
    }
    findCoordination();
}

void findX(int x) {
    if (coordinationX.find(x) == coordinationX.end()) {
        coordinationX[x] = 1;
    }
    else {
        coordinationX[x]++;
    }
}

void findY(int y) {
    if (coordinationY.find(y) == coordinationY.end()) {
        coordinationY[y] = 1;
    }
    else {
        coordinationY[y]++;
    }
}

void findCoordination() {
    for (auto iter : coordinationX) {
        if (iter.second != 2) {
            cout << iter.first << " ";
        }
    }
    for (auto iter : coordinationY) {
        if (iter.second != 2) {
            cout << iter.first << " ";
        }
    }
}
