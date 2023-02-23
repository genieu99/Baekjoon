#include <iostream>
using namespace std;

void compare(int x, int y) {
    if (x > 0) {
        if (y > 0)
            cout << "1" << endl;
        else if (y < 0)
            cout << "4" << endl;
    }
    else if(x<0) {
        if (y > 0)
            cout << "2" << endl;
        else if (y < 0)
            cout << "3" << endl;
    }
}

int main() {
    int x, y;
    cin >> x;
    cin >> y;
    compare(x, y);
    return 0;
}