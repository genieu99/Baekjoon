#include <iostream>
#include <string>
using namespace std;

int layer, room, guest;

int findWhereToStay() {
    int width, height;
    width = guest / layer;
    height = guest % layer;

    if (height != 0) {
        width++;
    }
    else {
        height = layer;
    }
    return height * 100 + width;
}

int main() {
    int testCase;
    cin >> testCase;

    while(testCase--) {
        int roomNumber;
        cin >> layer >> room >> guest;
        roomNumber = findWhereToStay();
        cout << roomNumber << "\n";
    }
}