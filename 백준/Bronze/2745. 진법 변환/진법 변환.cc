#include <iostream>
#include <cmath>
using namespace std;

void calculateBase(string number, int base);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string number;
    int base;
    cin >> number >> base;

    calculateBase(number, base);
}

void calculateBase(string number, int base) {
    int tmp, sum = 0;

    for (int i = 0 ; i < number.length(); i++) {
        tmp = number[number.length() - (i + 1)];

        if ('0' <= tmp && tmp <= '9') {
            tmp = tmp - '0';
        }
        else {
            tmp = tmp + 10 - 'A';
        }
        sum += (tmp * (int)pow(base, i));
    }
    cout << sum << "\n";
}