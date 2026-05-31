#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int testCases{};
    cin>>testCases;
    while(testCases--)
    {
        vector<int>distance(4);
        int count{};
        for(int i=0;i<4;i++)
        {
            cin>>distance[i];
            if(i!=0 && distance[i]>distance[0])
            {
                count++;
            }
        }
          cout<<count<<endl;
    }
  
}