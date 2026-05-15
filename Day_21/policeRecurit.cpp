#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n{};
    cin >> n;
    vector<int> v(n);
    int count{}, police{};
    for (int i{}; i < n; ++i)
    {
        cin >> v[i];
        if (v[i] == -1 && police == 0)
        {
            count++;
        }
        else if (v[i] == -1 && police > 0)
        {
            police--;
        }
        else
        {
            police += v[i];
        }
    }
    cout << count << endl;
    return 0;
}