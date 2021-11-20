#include <iostream>

using namespace std;

int main() {
    char c, d;

    while(cin >> c) {
        d += c - '0';
        if (32 <= d && d <= 127) {
            cout << d;
            d = 0;
        } else {
            d *= 10;
        }
    }
    cout << endl;
}
