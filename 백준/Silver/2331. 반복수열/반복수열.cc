#include <iostream>
#include <queue>
#include <cmath>
#define MAX 240000  // A 최대는 9999, P 최대는 5 -> 9의 5승 * 4
using namespace std;

int A, P;
int check[MAX];
void DFS(int number);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> A >> P;

    DFS(A);

    int count = 0;

    for (int i = 1; i < MAX; i++) {
        if (check[i] == 1) {
            count++;
        }
    }
    cout << count << endl;
}

void DFS(int number) {
    check[number]++;

    if (check[number] == 3) {
        return;
    }

    int next = 0;
    while (number) {
        next += pow(number % 10, P);
        number /= 10;
    }

    DFS(next);
}