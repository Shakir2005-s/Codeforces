#include <iostream>

using namespace std;

void solve() {
    long long n;
    cin >> n;

    if (n == 1) {
        cout << 1 << "\n";
    } else if (n == 2) {
        cout << 9 << "\n";
    } else if (n == 3) {
        cout << 29 << "\n";
    } else if (n == 4) {
        cout << 56 << "\n";
    } else {

        long long ans = 5 * n * n - 5 * n - 5;
        cout << ans << "\n";
    }
}

int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testcases;
    cin >> testcases;
    while (testcases--) {
        solve();
    }
    return 0;
}
