#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string guest_name{};
    string host_name{};
    string mix_name{};
    cin >> guest_name >> host_name >> mix_name;
    int g_len = guest_name.length();
    int h_len = host_name.length();
    int m_len = mix_name.length();
    if (g_len + h_len != m_len)
    {
        cout << "NO";
        return 0;
    }
    vector<int>visited_guest(g_len, -1);
    vector<int>visited_host(h_len, -1);
    for (int i = 0; i < m_len; i++)
    {
        int j = 0;
        for (; j < g_len; j++)
        {
            if (mix_name[i] == guest_name[j] && visited_guest[j] == -1)
            {
                visited_guest[j] = 0;
                break;
            }
        }
        if (j == g_len)
        {
            int k{};
            for (; k < h_len; k++)
            {
                if (mix_name[i] == host_name[k] && visited_host[k] == -1)
                {
                    visited_host[k] = 0;
                    break;
                }
            }
            if (k == h_len)
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout<< "YES";
    return 0;
}