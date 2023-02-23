#include <iostream>
using namespace std;


void calculateAndPrintEndTime(int hour, int minute, int cookingTime) {
    int endMinute = minute + cookingTime;
    int endHour = hour;

    while (endMinute >= 60) {
        endMinute = endMinute - 60;
        endHour += 1;
    }

    if (endHour >= 24) {
        endHour -= 24;
    }

    cout << endHour << " " << endMinute;
}

int main() {
    int hour, minute, cookingTime;
    cin >> hour >> minute;
    cin >> cookingTime;

    calculateAndPrintEndTime(hour, minute, cookingTime);
}