#include <iostream>
using namespace std;

int main() {
    int number, cnt = 0;
    int location[101][101];

    cin >> number;

    while (number--) {
        int x, y;
        cin >> x >> y;
        for (int i = x; i < x + 10; i++) {
            for (int j = y; j < y + 10; j++) {
                if (location[i][j] == 1) continue;
                location[i][j] = 1;
                cnt++;
            }
        }
    }
    cout << cnt << '\n';
}