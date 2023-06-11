#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n < 2) {
        cout << "No\n";
    }
    else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                cout << "No\n";
                return;
            }
        }
        cout << "Yes\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}