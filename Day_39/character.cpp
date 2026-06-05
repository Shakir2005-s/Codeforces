#include<iostream>
using namespace std;
int main()
{
    int testcases{};
    cin>>testcases;
    string name="codeforces";
    while(testcases--)
    {
        char c{};
        cin>>c;
        if(name.find(c)!=string::npos)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}