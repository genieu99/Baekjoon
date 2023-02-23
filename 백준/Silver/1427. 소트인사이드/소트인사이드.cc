#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findDigit(int number, vector<int> &digits);
void print(vector<int> &digits);

int main() {
    int number;
    vector<int> digits;
    cin >> number;

    findDigit(number, digits);
    sort(digits.begin(), digits.end(), greater<int>());
    print(digits);
}

void findDigit(int number, vector<int> &digits) {
    int digit;

    while(number != 0) {
        digit = number % 10;
        digits.push_back(digit);
        number /= 10;
    }
}

void print(vector<int> &digits) {
    for (int i = 0; i < digits.size(); i++) {
        cout << digits[i];
    }
}