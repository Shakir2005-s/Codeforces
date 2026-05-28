#include<iostream>
using namespace std;
int main()
{
    int testCases{};
    cin >> testCases;
    while(testCases--)
    {
        int value{};
        cin >> value;
        if(value>=1900)
        {
            cout << "Division 1" << endl;
        }
        else if(value>=1600 && value<=1899)
        {
            cout << "Division 2" << endl;
        }
        else if(value>=1400 && value<=1599)
        {
            cout << "Division 3" << endl;
        }
         else
        {
            cout << "Division 4" << endl;
        }
    }
    return 0;
}