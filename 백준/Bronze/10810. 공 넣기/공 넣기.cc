#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int from , to, ball;
void inputBall(vector<int> &baskets);
void print(vector<int> &baskets);

int main() {
    int basket, inputNumber;
    cin >> basket >> inputNumber;

    vector<int> baskets(basket + 1, 0);

    for (int i = 1; i <= inputNumber; i++) {
        cin >> from >> to >> ball;
        inputBall(baskets);
    }
    print(baskets);
}

void inputBall(vector<int> &baskets) {
    for (int i = from; i <= to; i++) {
        baskets[i] = ball;
    }
}

void print(vector<int> &baskets) {
    for (int i = 1; i < baskets.size(); i++) {
        cout << baskets[i] << " ";
    }
    cout << "\n";
}