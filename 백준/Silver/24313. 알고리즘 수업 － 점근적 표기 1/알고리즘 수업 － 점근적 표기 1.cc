#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

bool isSatisfyOn(int a1, int a0, int c, int n0);

int main() {
    int a1, a0, c, n0;
    cin >> a1 >> a0 >> c >> n0;

    cout << isSatisfyOn(a1, a0, c, n0) << endl;
}

bool isSatisfyOn(int a1, int a0, int c, int n0) {
    int fn = a1 * n0 + a0;

    // a0가 음수일 때는 맞을수도, 틀릴수도 있는데 true라고 잘못 결과가 나오는 것을 대비하여 a1 <= c 추가
    if (fn <= c * n0 && a1 <= c) {
        return true;
    }
    else {
        return false;
    }
}
