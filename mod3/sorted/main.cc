#include <iostream>

using namespace std;

int n, q;
int arr[100000];
int bad[100000];
int bad_count = 0;

void init() {
    cin >> n >> q;
    for (int i = 0; i < n; i++) cin >> arr[i];

    bad[0] = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] < arr[i]) {
            bad[i + 1] = 1;
            bad_count++;
        } else {
            bad[i + 1] = 0;
        }
    }
}

void check_index(int i) {
    if (i > 0) {
        bool val = arr[i - 1] > arr[i];
        bad_count += val - bad[i];
        bad[i] = val;
    }

    if (i < (n - 1)) {
        bool next = arr[i] > arr[i + 1];
        bad_count += next - bad[i + 1];
        bad[i + 1] = next;
    }
}

int main() {
    int a, b, t;    

    init();

    for (int i = 0; i < q; i++) {
        cin >> a >> b;
        swap(arr[a - 1], arr[b - 1]);

        check_index(a - 1);
        check_index(b - 1);

        cout << (bad_count > 0 ? "Unsorted!" : "Sorted!") << endl;
    }
}
