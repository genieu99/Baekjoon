#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void getPrice(int cnt, int number) {
    int price;

    if (cnt == 3) {
        price = 10000 + (number * 1000);
    }
    else if (cnt ==2) {
        price = 1000 + (number * 100);
    }
    else {
        price = (number * 100);
    }
    
    cout << price;
}

void compare(vector<int> &dice) {
    int number, cnt = 1;

    sort(dice.begin(), dice.end());

    for (int i = 0; i < dice.size() - 1; i++) {
        if (dice[i] == dice[i + 1]) {
            cnt++;
            number = dice[i];
        }
    }

    if (cnt == 1) {
        number = max({dice[0], dice[1], dice[2]});
    }

    getPrice(cnt, number);
}

int main() {
    int diceNumber, diceGame = 3;
    vector<int> dice;

    for (int i = 0; i < diceGame; i++) {
        cin >> diceNumber;
        dice.push_back(diceNumber);
    }

    compare(dice);
}