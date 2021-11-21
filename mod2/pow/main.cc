#include <iostream>

using namespace std;

int main() {
    int a, n; cin >> a >> n;
    long long sum = 1;
    
    long long t = 1;
    for (int i = 0; i < n; i++) {
        t *= a;
        sum += t;
    }
    
    cout << sum << endl;
}
