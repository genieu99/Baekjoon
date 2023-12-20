#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

void calculateTrianglePerimeter(int a, int b, int c);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    calculateTrianglePerimeter(a, b, c);
}

void calculateTrianglePerimeter(int a, int b, int c) {
    int newSide, perimeter;
    vector<int> sides;
    sides.push_back(a);
    sides.push_back(b);
    sides.push_back(c);
    sort(sides.begin(), sides.end());

    if (sides[0] + sides[1] <= sides[2]) {
        newSide = sides[0] + sides[1] - 1;
        perimeter = sides[0] + sides[1] + newSide;
    }
    else {
        perimeter = sides[0] + sides[1] + sides[2];
    }
    cout << perimeter;
}