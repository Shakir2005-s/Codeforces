#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int testcases{};
    cin >> testcases;
    while (testcases--)
    {
        int n{};
        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        vector<int> res(n);
        res[0] = 1;

        set<int> st;
        st.insert(1);
        int k{1};

        for (int i{2}; i <= 2 * n; ++i)
        {
            if (st.find(i) == st.end() && st.find(res[k - 1] + i) == st.end())
            {
                res[k] = i;
                st.insert(i);
                st.insert(res[k - 1] + i);
                ++k;
            }
            if (k == n)
            {
                break;
            }
        }
        for (int i{}; i < n; ++i)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }
}