#include <iostream>
#include <algorithm>
using namespace std;

int height[1000001];
void binarySearcy(long long tree, long long need);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long tree, need;
    cin >> tree >> need;

    for (int i = 0; i < tree; i++) {
        cin >> height[i];
    }
    
    sort(height, height + tree);
    binarySearcy(tree, need);
}

void binarySearcy(long long tree, long long need) {
    long long start = 0;
    long long end = height[tree - 1];
    long long mid = (start + end) / 2;
    long long sum, max = -1;

    while (start <= end) {
        sum = 0;
        mid = (start + end) / 2;

        for (int i = 0; i < tree; i++) {
            if (height[i] - mid > 0) {
                sum += height[i] - mid;
            }
        }

        if (sum >= need) {
            start = mid + 1;
            if (mid > max) {
                max = mid;
            }
        }
        else {
            end = mid - 1;
        }
    }

    cout << max;
}
