#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, string>> judge;
void inputPerson(int testCase);
void sortPerson();
bool compare(pair<int, string> vector1, pair<int, string> vector2);
void printPerson();

int main() {
    int testCase;
    cin >> testCase;

    inputPerson(testCase);
    sortPerson();
    printPerson();
}

void inputPerson(int testCase) {
    int age;
    string name;

    for (int i = 0; i < testCase; i++) {
        cin >> age >> name;
        judge.push_back(pair<int, string>(age, name));
    }
}

void sortPerson() {
    stable_sort(judge.begin(), judge.end(), compare);
}

bool compare(pair<int, string> vector1, pair<int, string> vector2) {
    return vector1.first < vector2.first;
}

void printPerson() {
    for (int i = 0; i < judge.size(); i++) {
        cout << judge[i].first << " " << judge[i].second << "\n";
    }
}