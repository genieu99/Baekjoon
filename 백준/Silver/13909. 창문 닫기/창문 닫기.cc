#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void openWindowNumber(long long window);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long window;
    cin >> window;

    openWindowNumber(window);
}

void openWindowNumber(long long window) {
    int open = 0;

    for (int i = 1; i <= sqrt(window); i++) {
        open++;
    }
    cout << open;
}