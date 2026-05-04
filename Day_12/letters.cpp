#include<iostream>
using namespace std;
void CountUniqueCharacters(string s)
{
    int count[26]={0};
    int uniqueCount=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        count[s[i]-'a']++;
    }
    for(int i{};i<26;i++)
    {
        if(count[i]>0)
        uniqueCount++;
    }
    cout<<uniqueCount<<endl;
}
int main()
{
    string str;
    getline(cin, str);
    CountUniqueCharacters(str);
    return 0;

}