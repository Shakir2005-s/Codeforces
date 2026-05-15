#include<iostream>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    while(testCases--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if((a+b==c)||(a+c==b)||(b+c==a))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}