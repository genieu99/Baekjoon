#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> changePoint;

void findChangePoint(int room, int number) {
    int last = changePoint.back();
    int startPoint = last + 6 * number;
    changePoint.push_back(startPoint);
}

int main() {
    int room, number = 1;
    cin >> room;
    
    changePoint.push_back(1);
    changePoint.push_back(2);

    while(true) {
        if (room == 1) break;
        findChangePoint(room, number++);
        if (room < changePoint.back()) {
            break;
        }
    }
    cout << number;
}