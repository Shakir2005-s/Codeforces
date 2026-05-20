#include<iostream>
using namespace std;
int main()
{
    string players{};
    cin>>players;
    int countTeamA{1},countTeamB{1};
    for(int i{};i<players.size()-1;++i)
    {
        if(players[i]=='0'&& players[i+1]=='0')
        {
            countTeamA++;
        }
        else if(players[i]=='1'&& players[i+1]=='1')
        {
            countTeamB++;
        }
        else
        {
            countTeamA=1;
            countTeamB=1;
        }
        if(countTeamA==7 || countTeamB==7)
        {
            cout<<"YES\n";
            return 0; 
        }
      

    }
    cout<<"NO\n";
}