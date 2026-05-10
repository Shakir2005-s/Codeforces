#include <iostream>
#include <vector>
using namespace std;
void solve(vector<vector<int>> Shirts)
{
    int count{};
    for (int i = 0; i < Shirts.size(); i++)
    {
        for (int j = 0; j < Shirts.size(); j++)
        {
            if (Shirts[i][0] == Shirts[j][1])
            {
                count++;
            }
        }
    }
    cout << count << endl;
}
int main()
{
    int n{};
    cin >> n;
    vector<vector<int>> Shirts(n, vector<int>(2));
    for (int i = 0; i < n; i++)
    {
        cin >> Shirts[i][0] >> Shirts[i][1];
    }
    solve(Shirts);
    return 0;
 
}