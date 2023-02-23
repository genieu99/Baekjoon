#include <iostream>
#include <string>
using namespace std;

int changeToCE(int taiwonYear) {
    return taiwonYear - 543;
}

int main() {
    int taiwonYear, ce;
    cin >> taiwonYear;

    ce = changeToCE(taiwonYear);
    cout << ce << "\n";
}