#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int input();
void print(int count);

int main() {
    int count = input();
    print(count);
}

int input() {
    char alphabet;
    int count = 0;

    while (true){
        cin.get(alphabet);
        if (alphabet == '\n') {
            break;
        }
        count++;
    }
    return count;
}

void print(int count) {
    cout << count;
}