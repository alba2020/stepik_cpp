#include <iostream>

using namespace std;

int dune(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return dune(n-1) + dune(n-2);
    }
}

int main() {
    int n; cin >> n;
    cout << dune(n) - 1 << endl;
}
