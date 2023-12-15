#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long number);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testCase;
    cin >> testCase;
    
    for (int i = 0; i < testCase; i++) {
        long long number;
        cin >> number;
        while (!isPrime(number)) {
            number++;
        }
        cout << number << "\n";
    }
}

bool isPrime(long long number) {
    if (number <= 1) {
        return false;
    }
    else if (number == 2 || number == 3) {
        return true;
    }
    else if (number % 2 == 0 || number % 3 == 0) {
        return false;
    }

    for (int i = 5; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}