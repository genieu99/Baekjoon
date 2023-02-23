#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> baskets;
void basketNumbering(int basket);
void reverseBasket(int from, int to);
void printBaskets();

int main() {
    int basket, change;
    cin >> basket >> change;
    basketNumbering(basket);

    for (int i = 0; i < change; i++) {
        int from, to;
        cin >> from >> to;
        reverseBasket(from, to);
    }
    printBaskets();
}

void basketNumbering(int basket) {
    for (int i = 0; i < basket; i++) {
        baskets.push_back(i + 1);
    }
}

void reverseBasket(int from, int to) {
    reverse(&baskets[from - 1], &baskets[to]);
}

void printBaskets() {
    for (int i = 0; i < baskets.size(); i++) {
        cout << baskets[i] << " ";
    }
    cout << "\n";
}