#include <iostream>

using namespace std;

int main() {
    int a, b, c; cin >> a >> b >> c;

    bool res = a || !a || b && (c || b && !a);
    cout << res;
}
