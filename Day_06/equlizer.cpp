#include <iostream>
#include <vector>

using namespace std;
void solve() {
    int n, k;
    cin >> n >> k;
    
    long long sum_val = 0;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        sum_val += temp;
    }
    if ((sum_val % 2 != 0) || ((1LL * n * k) % 2 == 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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
