#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<int> scores(n);
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }

    if (n <= 1) {
        cout << 0 << "\n";
        return 0;
    }

    
    int max_score = scores[0];
    int min_score = scores[0];
    int amazing_count = 0;


    for (int i = 1; i < n; ++i) {
        if (scores[i] > max_score) {
            amazing_count++;
            max_score = scores[i]; 
        } else if (scores[i] < min_score) {
            amazing_count++;
            min_score = scores[i]; 
        }
    }

    cout << amazing_count << "\n";

    return 0;
}
