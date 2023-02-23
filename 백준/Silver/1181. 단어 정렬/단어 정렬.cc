#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> words;
void inputWords(int testCase);
void checkDuplication(string word);
void sortWords();
bool compare(string a, string b);
void printWords();

int main() {
    int testCase;
    cin >> testCase;

    inputWords(testCase);
    sortWords();
    printWords();
}

void inputWords(int testCase) {
    string word;

    for (int i = 0; i < testCase; i++) {
        cin >> word;
        checkDuplication(word);
    }
}

void checkDuplication(string word) {
    if (find(words.begin(), words.end(), word) == words.end()) {
        words.push_back(word);
    }
}

void sortWords() {
    sort(words.begin(), words.end(), compare);
}

bool compare(string a, string b) {
    if (a.length() == b.length()) {
        return a < b;
    }
    else {
        return a.length() < b.length();
    }
}

void printWords() {
    for (int i = 0; i < words.size(); i++) {
        cout << words[i] << "\n";
    }
}