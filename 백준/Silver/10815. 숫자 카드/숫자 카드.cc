#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> cards;
vector<int> checking;
void isHave();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cardNumber, card;
    
    cin >> cardNumber;
    for (int i = 0; i < cardNumber; i++) {
        cin >> card;
        cards.push_back(card);
    }
    
    isHave();
}

void isHave() {
    int checkNumber, check;
    sort(cards.begin(), cards.end());

    cin >> checkNumber;
    for (int i = 0; i < checkNumber; i++) {
        cin >> check;
        if (binary_search(cards.begin(), cards.end(), check)) {
            cout << 1 << ' ';
        }
        else {
            cout << 0 << ' ';
        }
    }
}