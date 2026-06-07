#include<iostream>
using namespace std;
int main()
{
    int testCases{};
    cin>>testCases;
    while(testCases--)
    {
        int a{},b{},c{};
        cin>>a>>b>>c;
        if(a==b)
        {
            cout<<c<<endl;
        }
        else if(a==c)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<a<<endl;
        }
    }
}