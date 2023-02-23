#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n;

    int* p = new int[n];
    for (int i = 0; i < n; i++)
        cin >> (p[i]);
    int max = p[0];
    int min = p[0];

    for (int i = 0; i < n; i++) {
        if (p[i] <= min)
            min = p[i];
        if (p[i] >= max)
            max = p[i];
    }
    delete[] p;
    cout << min << " " << max << endl;
    return 0;
}