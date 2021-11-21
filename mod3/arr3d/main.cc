#include <iostream>

using namespace std;

int main() {
    int a[50][50][50];
    // cout << "enter k m n\n";
    int k, m, n; cin >> k >> m >> n;

    // cout << "enter array\n";
    int i, j, t;
    for (i = 0; i < k; i++)
        for (j = 0; j < m; j++)
            for (t = 0; t < n; t++)
                cin >> a[i][j][t];

    // cout << "enter q\n";
    int q; cin >> q;
    
    for (int z = 0; z < q; z++) {
        // cout << "enter request i j t\n";
        cin >> i >> j >> t;
        cout << a[i - 1][j - 1][t - 1] << "\n";
    }
}
