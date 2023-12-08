#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

void gameCard(queue<int> &cards);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int card;
    queue<int> cards;

    cin >> card;

    for (int i = 0; i < card; i++) {
        cards.push(i + 1);
    }

    gameCard(cards);
}

void gameCard(queue<int> &cards) {
    while (cards.size() > 1) {
        cards.pop();
        int top = cards.front();
        cards.push(top);
        cards.pop();
    }
    
    cout << cards.front();
}