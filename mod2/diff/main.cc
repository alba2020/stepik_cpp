#include <iostream>

using namespace std;

int main() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    int res = 1;

    res += b != a;
    res += c != b && c != a;
    res += d != c && d != b && d != a;
    cout << res << endl;
}
