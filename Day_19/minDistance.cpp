#include <iostream>
using namespace std;
int main()
{
    int distance1{}, distance2{}, distance3{};  // These are the three distances that we will be comparing to find the minimum distance.
    cin >> distance1 >> distance2 >> distance3; // Taking input for the three distances.
    if (distance1 >= distance2 && distance1 <= distance3 || distance1 <= distance2 && distance1 >= distance3)
    {
        cout << abs(distance1 - distance2) + abs(distance3 - distance1);
    }
    else if (distance2 >= distance1 && distance2 <= distance3 || distance2 <= distance1 && distance2 >= distance3)
    {
        cout << abs(distance2 - distance1) + abs(distance3 - distance2);
    }
    else
    {
        cout << abs(distance3 - distance1) + abs(distance3 - distance2);
    }
}