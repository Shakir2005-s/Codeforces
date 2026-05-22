#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long m{}, n{}, a{};
    cin >> m >> n >> a;

    long long stones_m = (m + a - 1) / a;
    long long stones_n = (n + a - 1) / a;

    long long ans = stones_m * stones_n;

    cout << ans << "\n";
    return 0;
}
