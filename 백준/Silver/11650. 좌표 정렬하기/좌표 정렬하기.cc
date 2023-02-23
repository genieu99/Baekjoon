#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> coordinate;
void inputCoordinate(int testCase);
void compare();
void print();

int main() {
    int testCase;
    cin >> testCase;

    inputCoordinate(testCase);
    compare();
    print();
}

void inputCoordinate(int testCase) {
    int x, y;

    for (int i = 0; i < testCase; i++) {
        cin >> x >> y;
    coordinate.push_back(pair<int, int>(x, y));
    }
}

void compare() {
    sort(coordinate.begin(), coordinate.end());
}

void print() {
    for (int i = 0; i < coordinate.size(); i++) {
        cout << coordinate[i].first << " " << coordinate[i].second << "\n";
    }
}