#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<bool> prime;
void checkPrime();
int goldBach(int number);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testCase;
    cin >> testCase;

    prime.assign(1000001, true);
    checkPrime();
    
    for (int i = 0; i < testCase; i++) {
        int number;
        cin >> number;
        cout << goldBach(number) << "\n";
    }
}

void checkPrime() {
    prime[0] = false;
    prime[1] = false;

    for (int i = 2; i < sqrt(prime.size()); i++) {
        if (prime[i] == true) {
            for (int j = 2; i * j < prime.size(); j++) {
                prime[i * j] = false;
            }
        }
    }
}

int goldBach(int number) {
    int cnt = 0;

    for (int i = 2; i < number / 2 + 1; i++) {
        if (prime[i] == true && prime[number - i] == true) {
            cnt++;
        }
    }
    return cnt;
}