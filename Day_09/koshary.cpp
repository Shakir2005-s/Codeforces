#include<iostream>
using namespace std;
void solve()
{
    int x{},y{};
    cin>>x>>y;
    if(x%2==0 && y%2==0)
    {
        cout<<"YES\n";
    }
    else if(x%2==1 && y%2==0)
    {
        cout<<"YES\n";
    }
    else if(x%2==0 && y%2==1)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
   
}
int main()
{
    int t{};
    cin>>t;
    while(t--)
    {
        solve();
    }
}