#include <iostream>
using namespace std;

void hanoi(int number, int from, int to, int temp);

int main() {
	int number;
	cin >> number;
    cout << (1 << number) - 1 << "\n";
    hanoi(number, 1, 3, 2);
}

void hanoi(int number, int from, int to, int temp) {
    if (number == 1) {
        cout << from << " " << to << "\n";
    }
    else {
        hanoi(number - 1, from, temp, to);
        cout << from << " " << to << "\n";
        hanoi(number - 1, temp, to, from);
    }
}