#include <iostream>

using namespace std;

int main() {
    int days[500][500];
    int n_days, n_months; cin >> n_days >> n_months;

    for (int d = 0; d < n_days; d++)
        for (int m = 0; m < n_months; m++)
            cin >> days[d][m];

    for (int m = 0; m < n_months; m++) {
        long long sum = 0;
        for (int d = 0; d < n_days; d++) {
            sum += days[d][m];
        }
        cout << sum << " ";
    }
}
