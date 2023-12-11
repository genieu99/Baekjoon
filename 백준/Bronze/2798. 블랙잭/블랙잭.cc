#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> cardNumbers;
void sum3Number(int card, int blackjackNumber);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int card, blackjackNumber;
    cin >> card >> blackjackNumber;

    for (int i = 0; i < card; i++) {
        int number;
        cin >> number;
        cardNumbers.push_back(number);
    }

    sort(cardNumbers.begin(), cardNumbers.end());
    sum3Number(card, blackjackNumber);
}

void sum3Number(int card, int blackjackNumber) {
    vector<bool> selected(card - 3, false);
    vector<int> possibleSum;
    selected.insert(selected.end(), 3, true);

    do {
        int tmpSum = 0;
        for (int i = 0; i < card; i++) {
            if (selected[i]) {
                tmpSum += cardNumbers[i];
            }
        }
        if (blackjackNumber >= tmpSum) {
            possibleSum.push_back(tmpSum);
        }
    } while (next_permutation(selected.begin(), selected.end()));
    
    sort(possibleSum.begin(), possibleSum.end());
    cout << possibleSum.back();
}