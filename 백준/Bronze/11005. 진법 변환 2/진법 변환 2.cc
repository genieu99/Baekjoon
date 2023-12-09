#include <iostream>
#include <algorithm>
using namespace std;

void calculateBase(int number, int base);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int number, base;
    cin >> number >> base;

    calculateBase(number, base);
}

void calculateBase(int number, int base) {
    int tmp;
    string baseNumber;

    while (number != 0) {
        tmp = number % base;
        if (tmp > 9) {
            tmp = tmp - 10 + 'A';
            baseNumber += tmp;
        }
        else {
            baseNumber += ('0' + tmp);
        }
        number /= base;
    }
    reverse(baseNumber.begin(), baseNumber.end());
    cout << baseNumber << '\n';
}