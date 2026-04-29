#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    int max_index = 0;
    for(int i = 1; i < n; i++)
    {
        if(v[i] > v[max_index])
        {
            max_index = i;
        }
    }

    int min_index = 0;
    for(int i = 1; i < n; i++)
    {
        if(v[i] <= v[min_index])
        {
            min_index = i;
        }
    }
    

    int swaps = max_index + (n - 1 - min_index);
    
   
    if(max_index > min_index)
    {
        swaps--;
    }
    
    cout << swaps << endl;
    
    return 0;
}