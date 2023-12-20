#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

void calculatePerimeter(long square);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long square;
    cin >> square;

    calculatePerimeter(square);
}

void calculatePerimeter(long square) {
    long perimeter;
    perimeter = square * 4;
    cout << perimeter;
}