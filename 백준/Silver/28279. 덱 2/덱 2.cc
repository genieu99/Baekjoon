#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

deque<int> numbers;
void saveAndPrintDeque(int order);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase, order;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        cin >> order;
        saveAndPrintDeque(order);
    }
}

void saveAndPrintDeque(int order) {
    int number;

    switch (order) {
        case 1:
            cin >> number;
            numbers.push_front(number);
            break;
        case 2:
            cin >> number;
            numbers.push_back(number);
            break;
        case 3:
            if (numbers.empty()) {
                cout << -1 << "\n";
                break;
            }
            cout << numbers.front() << "\n";
            numbers.pop_front();
            break;
        case 4:
            if (numbers.empty()) {
                cout << -1 << "\n";
                break;
            }
            cout << numbers.back() << "\n";
            numbers.pop_back();
            break;
        case 5:
            cout << numbers.size() << "\n";
            break;
        case 6:
            if (numbers.empty()) {
                cout << 1 << "\n";
            }
            else {
                cout << 0 << "\n";
            }
            break;
        case 7:
            if (numbers.empty()) {
                cout << -1 << "\n";
                break;
            }
            cout << numbers.front() << "\n";
            break;
        case 8:
            if (numbers.empty()) {
                cout << -1 << "\n";
                break;
            }
            cout << numbers.back() << "\n";
            break;
    }
}