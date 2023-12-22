#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

void printCombination(int clothes);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int clothes;
    cin >> clothes;

    printCombination(clothes);
}

void printCombination(int clothes) {
    int combination = clothes * (clothes - 1);
    cout << combination;
}