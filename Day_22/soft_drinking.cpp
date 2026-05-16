#include <iostream>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    // Calculate toasts from each resource
    int toasts_from_drink = (k * l) / nl;
    int toasts_from_limes = c * d;
    int toasts_from_salt = p / np;
    
    // Find the minimum (bottleneck)
    int total_toasts = toasts_from_drink;
    if (toasts_from_limes < total_toasts) total_toasts = toasts_from_limes;
    if (toasts_from_salt < total_toasts) total_toasts = toasts_from_salt;
    
    // Each friend gets equal share
    int toasts_per_friend = total_toasts / n;
    
    cout << toasts_per_friend << endl;
    
    return 0;
}
