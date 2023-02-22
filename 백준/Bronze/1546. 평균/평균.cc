#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	double* score = new double[n];
	for (int i = 0; i < n; i++)
		cin >> score[i];
	
	int max = score[0];
	for (int i = 0; i < n; i++)
		if (max < score[i]) max = score[i];

	double sum = 0;
	for (int i = 0; i < n; i++) {
		score[i] = score[i] / max * 100;
		sum += score[i];
	}
	
    delete[] score;
	double avg = sum / n;
	cout << avg << endl;
	
	return 0;
}