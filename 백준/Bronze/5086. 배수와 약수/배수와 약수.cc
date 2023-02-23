#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool checkFactor(int first, int second);
bool checkMultiple(int first, int second);

int main() {
    int first, second;

    while (true) {
        cin >> first >> second;
        if (first == 0 && second == 0) {
            break;
        }
        if (checkFactor(first, second)) {
            cout << "factor" << "\n";
        }
        else if (checkMultiple(first, second)) {
            cout << "multiple" << "\n";
        }
        else {
            cout << "neither" << "\n";
        }
    }
}

bool checkFactor(int first, int second) {
    if (second % first == 0) {
        return true;
    }
    else {
        return false;
    }
}

bool checkMultiple(int first, int second) {
    if (first % second == 0) {
        return true;
    }
    else {
        return false;
    }
}

