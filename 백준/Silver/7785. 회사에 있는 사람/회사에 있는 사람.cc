#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

set<string> commute;
void isInCompany(string name, string state);
void printInCompanyDESC();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int employeeNumber;
    cin >> employeeNumber;

    for (int i = 0; i < employeeNumber; i++) {
        string name, state;
        cin >> name >> state;
        isInCompany(name, state);
    }
    
    printInCompanyDESC();
}

void isInCompany(string name, string state) {
    if (state == "enter") {
        commute.insert(name);
    }
    else {
        commute.erase(name);
    }
}

void printInCompanyDESC() {
    for (auto iter = commute.rbegin(); iter != commute.rend(); iter++) {
        cout << *iter << "\n";
    }
}