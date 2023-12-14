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

    int cardNumber, card, checkNumber, check;
    
    cin >> cardNumber;
    for (int i = 0; i < cardNumber; i++) {
        cin >> card;
        cards.push_back(card);
    }
    
    cin >> checkNumber;
    for (int i = 0; i < checkNumber; i++) {
        cin >> check;
        checking.push_back(check);
    }
    
    isHave();
}

void isHave() {
    vector<int> results(checking.size(), 0);
    sort(cards.begin(), cards.end());

    for (int i = 0; i < checking.size(); i++) {
        int right = cards.size() - 1;
        int left = 0;

        while (left <= right) {
            int mid = (left + right) / 2;
            if (cards[mid] == checking[i]) {
                results[i] = 1;
                break;
            }
            if (cards[mid] > checking[i]) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
    }

    for (int i = 0; i < checking.size(); i++) {
        cout << results[i] << " ";
    }
}