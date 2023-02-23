#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int x, a, b;
	cin >> x;
	for (int i = 0; i < x; i++) {
		cin >> a >> b;
		cout << a + b << '\n';
	}
	return 0;
}