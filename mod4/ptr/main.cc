#include <iostream>

using namespace std;

int main() {

    int x[5] = {1,2,3,4,5};
    int n = 3;
    int *a[3] = {x, x + 1, x + 2};

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    int *min, *max;
    min = max = a[0];

    for (int i = 0; i < n; i++) {
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
    }
    cout << "min=" << min << endl;
    cout << "max=" << max << endl;
    int ans = max - min + 1;
    cout << "ans=" << ans << endl;
}
