#include<iostream>
using namespace std;
int main()
{
    string bin1{},bin2{};
    cin>>bin1>>bin2;
    string result{};
    for(int i{};i<bin1.size();++i)
    {
        if((bin1[i]=='1' && bin2[i]=='1')||(bin1[i]=='0' && bin2[i]=='0'))
        {
            result+='0';
        }
        else if((bin1[i]=='1' && bin2[i]=='0') || (bin1[i]=='0' && bin2[i]=='1'))
        {
            result+='1';
        }
      
    }
     cout<<result;
     return 0;

}
