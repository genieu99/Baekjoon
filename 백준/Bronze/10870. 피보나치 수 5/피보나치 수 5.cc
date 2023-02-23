#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int fibonacci(int number);

int main() {
    int number, result;
    cin >> number;

    result = fibonacci(number);
    cout << result;
}

int fibonacci(int number) {
    if (number == 0) {
        return 0;
    }
    if (number ==1) {
        return 1;
    }
    return fibonacci(number-2) + fibonacci(number-1);
}