#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int startX, startY, startZ;
__float128 calculateDistance(int X, int Y, int Z);
__float128 getSqrtByNewtonRaphson(__float128 x);
void printSantaPossible(__float128 sum, int time);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testcase;
    cin >> testcase;

    for (int i = 0; i < testcase; i++) {
        int time;
        startX = 0, startY = 0, startZ = 0;
        __float128 sum = 0;
        cin >> time;

        for (int j = 0; j < 4; j++) {
            int X, Y, Z;
            cin >> X >> Y >> Z;
            sum += calculateDistance(X, Y, Z);
            startX = X, startY = Y, startZ = Z;
        }
        printSantaPossible(sum, time);
    }
}

__float128 calculateDistance(int X, int Y, int Z) {
    __float128 pytha = pow(X - startX, 2) + pow(Y - startY, 2) + pow(Z - startZ, 2);
    return getSqrtByNewtonRaphson(pytha);
}

__float128 getSqrtByNewtonRaphson(__float128 x) {
    __float128 y = 1, gy = 0;

    if (x == 0) {
        return 0;
    }

    do {
        __float128 t = (y + (x / y)) / 2;
        gy = y;
        y = t;
    } while (y != gy);
    return y;
}

void printSantaPossible(__float128 sum, int time) {
    if (sum > time) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
    }
}