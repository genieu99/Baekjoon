#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int findSeries(int movie);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int movie, series;
    cin >> movie;
    
    series = findSeries(movie);
    cout << series;
}

int findSeries(int movie) {
    int title = 665;
    int series = 0;
    
    while (series != movie) {
        title++;
        int tmp = title;

        while (tmp >= 666) {
            if (tmp % 1000 == 666) {
                series++;
                break;
            }
            tmp /= 10;
        }
    }
    return title;
}