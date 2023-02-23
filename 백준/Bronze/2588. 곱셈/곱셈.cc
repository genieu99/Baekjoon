#include <iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 0;
    cin >> a >> b;
    int d = b;
    
    while (d != 0){
        int c = d % 10;
        cout << a*c << endl;
        d /= 10;
    }
    cout << a*b << endl;
    return 0;
}