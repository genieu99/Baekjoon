#include <iostream>
using namespace std;

void leap_year(int a) {
    if (a % 4 == 0) {
        if (a % 100 != 0 || a % 400 == 0)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    else
        cout << "0" << endl;
}

int main() {
    int a;
    cin >> a ;
    leap_year(a);
    return 0;
}