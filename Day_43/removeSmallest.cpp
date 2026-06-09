#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
void solve(vector<int>& arr)
{
    sort(arr.begin(),arr.end());
    for(int i{};i<arr.size()-1;++i)
    {
        if(abs(arr[i]-arr[i+1])>1)
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
   
}
int main()
{
    int testCases{};
    cin>>testCases;
    while(testCases--)
    {
        int n{};
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        solve(arr);
    }
}