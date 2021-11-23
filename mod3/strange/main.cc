#include <iostream>

using namespace std;

void f(int left, int right, int a[]) {
    if (left > right) {
        return;
    } else {
        int imid = (right + left) / 2;
        cout << a[imid] << " ";
        f(imid + 1, right, a);
        f(left, imid - 1, a);
    }
}

int main() {
    int n; cin >> n;
    int a[100000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    f(0, n-1, a);
    cout << endl;
}
