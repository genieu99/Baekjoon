#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void findTarget(vector<int> &numberVector, int target) {
    int cnt = 0;

    for (int i = 0; i < numberVector.size(); i++) {
        if (numberVector[i] == target) {
            cnt++;
        }
    }
    cout << cnt;
}

int main() {
    int number, integer, target;
    vector<int> numberVector;
    cin >> number;

    for (int i = 0; i < number; i++) {
        cin >> integer;
        numberVector.push_back(integer);
    }

    cin >> target;

    findTarget(numberVector, target);
}