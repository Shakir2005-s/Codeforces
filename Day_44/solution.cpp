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
        long long limit = min(n, 10000000000LL);
    
      
        for (long long a = 0; a <= limit; a++) {
            if (is_palindrome(a)) {
                long long b = n - a;
                if (b >= 0 && b % 12 == 0) {
                    cout << a << " " << b << "\n";
                    found = true;
                    break;
                }
            }
        }
        
        if (!found) {
            cout << "-1\n";
        }
    }
    
    return 0;
}
