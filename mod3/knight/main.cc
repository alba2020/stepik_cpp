#include <iostream>

using namespace std;

int main() {
    char c;
    int ik, jk;

    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++) {
            do {
                cin >> c;
            } while (c != '.' && c != 'K');
            if (c == 'K') {
                ik = i; jk = j;
                goto out;
            }
        }
    out:

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ( ((i - ik) * (i - ik) + (j - jk) * (j - jk)) == 5 ) {
                cout << "!";
            } else if (i == ik && j == jk) {
                cout << "K";
            } else {
                cout << '.';
            }
        }
        cout << endl;
    }
}
