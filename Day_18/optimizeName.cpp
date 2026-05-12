#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string guest{},host{},mix{};
    cin >> guest >> host >> mix;
    int g_len = guest.length();
    int h_len = host.length();
    int m_len = mix.length();
    if(g_len + h_len != m_len)
    {       
        cout << "NO";
        return 0;
    }
    vector<int>count(26,0);
    for(int i = 0; i < m_len; i++)
    {
        count[mix[i]-'A']++;
    }
    for(int i = 0; i < g_len; i++)
    {
        count[guest[i]-'A']--;
    }
    for(int i = 0; i < h_len; i++)
    {
        count[host[i]-'A']--;                           
    }
    for(int i = 0; i < 26; i++)
    {
        if(count[i] != 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;

}