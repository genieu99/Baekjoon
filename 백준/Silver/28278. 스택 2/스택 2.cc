#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> integerVector;
void action(int orderNum);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int testCase, orderNum;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        cin >> orderNum;
        
        action(orderNum);
    }
}

void action(int orderNum) {
    int number;

    switch (orderNum) {
        case 1:
            cin >> number;
            integerVector.push_back(number);
            break;
        case 2:
            if (integerVector.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << integerVector.back() << '\n';
                integerVector.pop_back();
            }
            break;
        case 3:
            cout << integerVector.size() << '\n';
            break;
        case 4:
            if (integerVector.empty()) {
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
            break;
        case 5:
            if (integerVector.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << integerVector.back() << '\n';
            }
            break;
            
    }
}