#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> storedFactor;
void findFactor(int number);
void printResult(int order);

int main() {
    int number, order;
    cin >> number >> order;

    findFactor(number);
    printResult(order);
}

void findFactor(int number) {
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            storedFactor.push_back(i);
        }
    }
}

void printResult(int order) {
    if (storedFactor.size() < order) {
        cout << 0;
    }
    else {
        cout << storedFactor[order - 1];
    }
}