#include <iostream>

using namespace std;

int input_array(int a[]) {
    int n; cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    return n;
}

void sort_array(int n, int a[]) {
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if(a[i] > a[j]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
}

void my_sort(int n, int a[]) {
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if(a[i] < a[j]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
}

void print_array(int n, int a[]) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    int a[1000];
    int n = input_array(a);
    my_sort(n, a);
    print_array(n, a);
}
