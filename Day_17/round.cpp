#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;
        
        vector<int> terms;
        int multiplier = 1;
        while (n > 0)
        {
            int digit = n % 10;
            if (digit != 0)
            {
                terms.push_back(digit * multiplier);
            }
            n /= 10;
            multiplier *= 10;
        }

        cout << terms.size() << "\n";
        for (int term : terms)
        {
            cout << term << " ";
        }
        cout << "\n";
    }
    
    return 0;
}