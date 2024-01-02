#include <iostream>
#include <algorithm>
using namespace std;

int input;
int values[100010];
void inputValue(int input);
void checkValues();
void binarySearch(int checkingNumber);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> input;
    inputValue(input);
    checkValues();
}

void inputValue(int input) {
    for (int i = 0; i < input; i++) {
        int inputNumber;
        cin >> inputNumber;
        values[i] = inputNumber;
    }

    sort(values, values + input);
}

void checkValues() {
    int checking, checkingNumber;
    cin >> checking;
    
    for (int i = 0; i < checking; i++) {
        cin >> checkingNumber;
        binarySearch(checkingNumber);
    }
}

void binarySearch(int checkingNumber) {
    int start = 0;
    int end = input - 1;
    int mid;

    while (start <= end) {
        mid = (start + end) / 2;
        if (checkingNumber == values[mid]) {
            cout << 1 << "\n";
            return;
        }
        else if (checkingNumber < values[mid]) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    cout << 0 << "\n";
}