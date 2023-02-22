#include <iostream>
using namespace std;

int findLivingPeople(int floor, int number) {
    if (number == 1) {
        return 1;
    }

    if (floor == 0) {
        return number;
    }

    return findLivingPeople(floor - 1, number) + findLivingPeople(floor, number - 1);
}

int main() {
    int testCase;
    cin >> testCase;

    while (testCase--) {
        int floor, number, livingPeople;
        cin >> floor >> number;

        livingPeople = findLivingPeople(floor, number);
        cout << livingPeople << "\n";
    }
}