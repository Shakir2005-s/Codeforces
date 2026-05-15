#include <iostream>
using namespace std;
int main()
{
    int n{};
    cin >> n;
    string array[n];
    int totalSides{};
    int i{};
    while (i < n)
    {
        cin >> array[i];
        if (array[i] == "Tetrahedron")
        {
            totalSides += 4;
        }
        else if (array[i] == "Cube")
        {
            totalSides += 6;
        }
        else if (array[i] == "Octahedron")
        {
            totalSides += 8;
        }
        else if (array[i] == "Dodecahedron")
        {
            totalSides += 12;
        }
        else
        {
            totalSides += 20;
        }
        ++i;
    }
    cout << totalSides << endl;
}