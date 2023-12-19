#include <iostream>
#include <algorithm>
using namespace std;

int x, y, w, h;
void calculateDistance();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> x >> y >> w >> h;
    calculateDistance();
}

void calculateDistance() {
    int minimumX, minimumY, finalMinimum;
    minimumX = min(x, w - x);
    minimumY = min(y, h - y);
    finalMinimum = min(minimumX, minimumY);

    cout << finalMinimum;
}