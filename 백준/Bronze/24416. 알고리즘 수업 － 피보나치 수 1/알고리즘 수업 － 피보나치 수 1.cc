#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int recursion = 0;
int dynamic = 0;
int fib(int number);
void fibonacci(int number);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int number;
    cin >> number;
    
    fib(number);
    fibonacci(number);

    cout << recursion << " " << dynamic;
}

int fib(int number) {
    if (number == 1 || number == 2) {
        recursion++;
        return recursion;
    }
    else {
        return (fib(number - 1) + fib(number - 2));
    }
}

void fibonacci(int number) {
    int* f = new int[number];
    f[1] = 1, f[2] = 1;

    for (int i = 3; i <= number; i++) {
        dynamic++;
        f[i] = f[i - 1] + f[i - 2];
    }
}