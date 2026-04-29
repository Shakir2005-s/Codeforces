#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n{};
    string s;
    cin>>n>>s;
    bool letters[26] = {false};
    
    for(int i=0;i<s.length();i++)
    {
        char c = s[i];
        if(c>='A' && c<='Z')
            letters[c-'A'] = true;
        else if(c>='a' && c<='z')
            letters[c-'a'] = true;
    }
    
    bool isPangram = true;
    for(int i=0;i<26;i++)
    {
        if(!letters[i])
        {
            isPangram = false;
            break;
        }
    }
    
    if(isPangram)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}