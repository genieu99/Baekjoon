#include <iostream>
using namespace std;

long long add(long long a, long long b, long long c);

int main() {
	long long a, b, c;
	long sum;
	cin >> a >> b >> c;

	sum = add(a, b, c);
	cout << sum << "\n";
}

long long add(long long a, long long b, long long c) {
	return a + b + c;
}