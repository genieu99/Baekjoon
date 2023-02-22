#include <iostream>
using namespace std;

int main() {
    int weight, bagWith3;
    cin >> weight;

    int bagWith5 = weight / 5;

    while (true) {
        if (bagWith5 < 0) {
            cout << -1 << "\n";
            return 0;
        }
        if ((weight - (bagWith5 * 5)) % 3 == 0) {
            bagWith3 = (weight - (bagWith5 * 5)) / 3;
            break;
        }
        bagWith5--;
    }

    cout << bagWith5 + bagWith3 << "\n";
}