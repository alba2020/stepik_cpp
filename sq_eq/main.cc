#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(6);

    int a, b, c; cin >> a >> b >> c;

    double d = b * b - 4 * a * c;
    double x1 = (-b + sqrt(d)) / (2 * a);

    cout << x1 << endl;
}
