#include<iostream>
using namespace std;
int main()
{
    int testCases{};
    cin>>testCases;
    while(testCases--)
    {
        int n{};
        cin>>n;
        int sum{};
        while(n)
        {
            sum+=n%10;
            n/=10;
        }
        cout<<sum<<endl;
    }
}