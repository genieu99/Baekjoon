#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> baskets;
void inputBall(int basket);
void swapBall(int first, int second);
void printBaskets();

int main() {
    int basket, change;
    cin >> basket >> change;
    inputBall(basket);

    for (int i = 0; i < change; i++) {
        int first, second;
        cin >> first >> second;
        swapBall(first - 1, second - 1);
    }
    printBaskets();
}

void inputBall(int basket) {
    for (int i = 0; i < basket; i++) {
        baskets.push_back(i + 1);
    }
}

void swapBall(int first, int second) {
    int temp = baskets[first];
    baskets[first] = baskets[second];
    baskets[second] = temp;
}

void printBaskets() {
    for (int i = 0; i < baskets.size(); i++) {
        cout << baskets[i] << " ";
    }
    cout << "\n";
}