#include <iostream>

using namespace std;

int main() {
    int a[500][500];
    int n; cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[n - 1 - j][n - 1 - i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
