#include <iostream>

using namespace std;

int main() {
    int year; cin >> year;
    int sum;

    while (sum != 13) {
        year++;
        sum = 0;
        int n = year;
        while(n > 0) {
            sum += n % 10;
            n /= 10;
        }
    }

    cout << year << endl;
}
