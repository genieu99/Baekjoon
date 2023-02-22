#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void findUnsubmitNumber(vector<int> &submitNumber) {
    for (int i = 1; i <= 30; i++) {
        if (submitNumber[i] == 0) {
            cout << i << "\n";
        }
    }
}

int main() {
    int number;
    vector<int> submitNumber(31);

    for (int i = 0; i < 28; i++) {
        cin >> number;
        submitNumber[number] = 1;
    }

    findUnsubmitNumber(submitNumber);
}