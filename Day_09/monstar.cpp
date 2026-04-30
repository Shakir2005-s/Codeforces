#include<iostream>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int left{},right{};
    for(int i{};i<n;++i)
    {
        if(s[i]==')')
        {
            right++;
        }
        else
        {
            left++;
        }
    
    }
    left==right?cout<<"YES\n":cout<<"NO\n";
}
int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {

        solve();
    }
}