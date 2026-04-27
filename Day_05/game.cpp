#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n, p, q;
    cin >> n >> p;
    
    set<int> levels;
    for(int i = 0; i < p; i++)
    {
        int level;
        cin >> level;
        levels.insert(level);
    }
    
    cin >> q;

    for(int i = 0; i < q; i++)
    {
        int level;
        cin >> level;
        levels.insert(level);
    }
    
    if(levels.size() == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
    
    return 0;
}