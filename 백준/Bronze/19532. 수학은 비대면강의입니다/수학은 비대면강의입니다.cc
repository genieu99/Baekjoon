#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a, b, c, d, e, f;
void solveEquation();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> a >> b >> c >> d >> e >> f;

    solveEquation();
}

void solveEquation() {
    int x, y;
    y = ((c * d) - (f * a)) / ((b * d) - (e * a));
    x = ((c * e) - (f * b)) / ((a * e) - (d * b));
    
    cout << x << " " << y;
}