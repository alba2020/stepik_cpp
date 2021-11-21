#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[10000];

    for (int i = 0; i < n; i++) cin >> a[i];

    int min, max;
    min = max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == min) a[i] = max;
        else if (a[i] == max) a[i] = min;
    }

    for (int i = 0; i < n; i++) cout << a[i] << " ";
}
