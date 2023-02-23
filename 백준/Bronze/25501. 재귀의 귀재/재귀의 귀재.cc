#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

int recursionCount = 0;
int isPalindrome(const char *s);
int recursion(const char *s, int l, int r);

int main() {
    int testCase;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        string letter;
        cin >> letter;
        cout << isPalindrome(letter.c_str()) << " " << recursionCount << "\n";
        recursionCount = 0;
    }
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s) - 1);
}

int recursion(const char *s, int l, int r){
    recursionCount++;
    if(l >= r) {
        return 1;
    }
    else if(s[l] != s[r]) {
        return 0;
    }
    else {
        return recursion(s, l+1, r-1);
    }
}
