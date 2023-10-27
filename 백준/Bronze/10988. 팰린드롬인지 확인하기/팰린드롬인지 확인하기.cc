#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isPalindrome(string word);

int main() {
    string word;
    cin >> word;

    cout << isPalindrome(word);
}

bool isPalindrome(string word) {
    int wordLength = word.length();
    for (int i = 0; i < wordLength / 2; i++) {
        if (word[i] != word[wordLength -1 - i]) {
            return 0;
        }
    }
    return 1;
}