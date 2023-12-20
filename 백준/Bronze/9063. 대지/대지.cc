#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

vector<int> coordinateX;
vector<int> coordinateY;
int calculateRectangle();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int marble;
    cin >> marble;

    for (int i = 0; i < marble; i++) {
        int x, y;
        cin >> x >> y;
        coordinateX.push_back(x);
        coordinateY.push_back(y);
    }
    int area = calculateRectangle();
    cout << area;
}

int calculateRectangle() {
    int minX, maxX, minY, maxY, area;

    if (coordinateX.size() == 1) {
        area = 0;
    }
    else {
        sort(coordinateX.begin(), coordinateX.end());
        sort(coordinateY.begin(), coordinateY.end());

        minX = coordinateX.front();
        maxX = coordinateX.back();
        minY = coordinateY.front();
        maxY = coordinateY.back();

        area = (maxX - minX) * (maxY - minY);
    }
    return area;
}