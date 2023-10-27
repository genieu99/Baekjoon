#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

void calculateAverageScore(double credit, double grade);

int main() {
    string subject, rating;
    double credit, creditSum, gradeSum;

    map<string, double> gradeTable;
    gradeTable["A+"] = 4.5;
    gradeTable["A0"] = 4.0;
    gradeTable["B+"] = 3.5;
    gradeTable["B0"] = 3.0;
    gradeTable["C+"] = 2.5;
    gradeTable["C0"] = 2.0;
    gradeTable["D+"] = 1.5;
    gradeTable["D0"] = 1.0;
    gradeTable["F"] = 0.0;

    for (int i = 0; i < 20; i++) {
        cin >> subject >> credit >> rating;
        if (rating != "P") {
            creditSum += credit;
            gradeSum += credit * gradeTable[rating];
        }
    }

    cout << gradeSum / creditSum;
}
