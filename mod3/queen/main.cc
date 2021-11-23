#include <iostream>

using namespace std;

int iq, jq;

void find_queen() {
    char c;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            do {
                cin >> c;
            } while (c != '.' && c != 'F');
            if (c == 'F') {
                iq = i;
                jq = j;
                return;
            }
        }
    }
}

int di2(int i) {
    return (i - iq) * (i - iq);
}

int dj2(int j) {
    return (j - jq) * (j - jq);
}

int main() {
    char c;
    find_queen();

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i == iq && j == jq) {
                cout << "F";
            } else if (di2(i) == 0 || dj2(j) == 0 || di2(i) == dj2(j)) {
                cout << "!";
            } else {
                cout << '.';
            }
        }
        cout << endl;
    }
}
