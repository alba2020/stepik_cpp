#include <iostream>

using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(10);

    double pi = 3.14159265358979323846264338327950288419716939937510;

    int p; cin >> p;
    cout.precision(p);

    cout << pi << endl;
}
