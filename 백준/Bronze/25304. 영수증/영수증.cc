#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isCorrect(int totalPrice, int tempSum) {
    if (totalPrice == tempSum) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}

int main() {
    int totalPrice, kind, price, number;
    int tempSum = 0;
    cin >> totalPrice;
    cin >> kind;

    for (int i = 0; i < kind; i++) {
        cin >> price >> number;
        tempSum += price * number;
    }

    isCorrect(totalPrice, tempSum);
}