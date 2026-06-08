#include<iostream>
using namespace std;
#include<vector>
int main()
{
    int testcases{};
    cin>>testcases;
    while(testcases--)
    {
        int n{};
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        // Find the common value by checking first 3 elements
        int common;
        if (arr[0] == arr[1]) {
            common = arr[0];
        } else if (arr[0] == arr[2]) {
            common = arr[0];
        } else {
            common = arr[1];
        }
        
        // Find and print the index of the different element
        for (int i = 0; i < n; i++) {
            if (arr[i] != common) {
                cout << i + 1 << endl;  
                break;
            }
        }
    }
    
    return 0;
}


