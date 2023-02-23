#include <iostream>
using namespace std;

void alarm(int a, int b) {
    if (b - 45 >= 0)
        cout << a << " " << b - 45 << endl;
    else {
        if (a - 1 >= 0)
            cout << a - 1 << " " << b + 15 << endl;
        else
            cout << a + 23 << " " << b + 15 << endl;
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    alarm(a, b);
    return 0;
}