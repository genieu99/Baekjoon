#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<int> coin;
vector<int> coinNumber;
void initialCoinVector();
void calculateChange(int change);
void printResult(int i);

int main() {
    int testCase, change;
    cin >> testCase;

    initialCoinVector();

    for (int i = 0; i < testCase; i++) {
        cin >> change;
        calculateChange(change);
    }
}

void initialCoinVector() {
    int quater = 25, dime = 10, nickel = 5, penny = 1;
    
    coin.push_back(quater);
    coin.push_back(dime);
    coin.push_back(nickel);
    coin.push_back(penny);
}

void calculateChange(int change) {
    for (int i = 0; i < coin.size(); i++) {
        coinNumber.push_back(change / coin[i]);
        change = change % coin[i];
        printResult(i);
    }
}

void printResult(int i) {
    if (i == coin.size() - 1) {
        cout << coinNumber[i] << endl;
        coinNumber.clear();
    }
    else {
        cout << coinNumber[i] << " ";
    }
}
