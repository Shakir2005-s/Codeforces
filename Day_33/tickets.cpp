#include<iostream>
using namespace std;
int main()
{
    int testcases{};
    cin>>testcases;
    while(testcases--)
    {
        string tickets{};
        cin>>tickets;;
        int sum1{},sum2{};
        int i=0,j=tickets.size()-1;
        while(i<j)
        {
            sum1+=tickets[i++]-'0';
            sum2+=tickets[j--]-'0';
        }
        if(sum1==sum2)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}