#include <iostream>
using namespace std;

void compare(int a, int b) {
    if (a > b) 
        cout<< '>' << endl;
    else if (a < b) 
        cout << '<' << endl;
    else 
        cout << "==" << endl;
}

int main() {
    int a, b;
    cin >> a >> b;
    compare(a, b);
    return 0;
}