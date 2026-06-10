#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(long long x) {
    string s = to_string(x);
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;
        
        bool found = false;
    
        for (long long b = 0; b <= n && b <= 12000000LL; b += 12) {
            long long a = n - b;
            if (is_palindrome(a)) {
                cout << a << " " << b << "\n";
                found = true;
                break;
            }
        }
        
        if (!found) {
            cout << "-1\n";
        }
    }
    
    return 0;
}
