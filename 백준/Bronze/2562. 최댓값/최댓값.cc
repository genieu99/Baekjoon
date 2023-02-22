#include <iostream>
using namespace std;

int main() {
    int arr[9];
    int cnt = 0;
    for (int i = 0; i < 9; i++)
        cin >> arr[i];
    
    int max = arr[0];
    for (int i = 0; i < 9; i++) {
        if (arr[i] >= max) {
            max = arr[i];
            cnt = i + 1;
        }
    }

    cout << max << '\n' << cnt;
    return 0;
}