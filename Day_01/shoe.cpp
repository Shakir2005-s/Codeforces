#include<iostream>
using namespace std;
#include<unordered_map>
#include<vector>
int main(){
    vector<int> shoe(4);
    unordered_map<int,int> mp;
    int count{};
    for(int i{};i<4;++i)
    {
        cin>>shoe[i];
        if(mp.find(shoe[i])==mp.end())
        {
            mp[shoe[i]]=1;
        
        }
        else
        {
            count++;
            mp[shoe[i]]++;
        }
    }
    cout<<count<<endl;
    return 0;
   
 
}
