#include <iostream>

using namespace std;

void f(int n) {
    if (n == 0) {
        cout << "it's not my fault";
    } else {
        cout << "Sir," << " ";
        f(n - 1);
        cout << " " << "because" << " ";
        f(n - 1);
        cout << " " << "sorry";
    }
}

int main() {
    int n; cin >> n;
    f(n);
    cout << endl;
}
