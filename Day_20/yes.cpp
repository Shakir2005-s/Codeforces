#include<iostream>
#include<string>
using namespace std;
int main()
{
    int testCases;
    cin>>testCases;
    while(testCases--)
    {
        string s;
        cin>>s;
        for(int i{};i<s.size();i++)
        {
            s[i]=toupper(s[i]);
        }
        if(s=="YES")
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}