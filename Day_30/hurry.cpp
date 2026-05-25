#include <iostream>
using namespace std;
void solve()
{
    int n{}, k{};
    cin >> n >> k;
    int minutes=60*4;
    int timeLeftForQuestions=minutes-k;
    int count{};
    int i{1};
    while(timeLeftForQuestions>=5*i && count<n)
    {
        timeLeftForQuestions-=5*i;
        count++;
        ++i;
    }
    cout<<count<<endl;
}
int main()
{
    solve();
    return 0;
}