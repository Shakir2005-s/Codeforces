#include <iostream>
using namespace std;
#include <vector>
void solve(vector<int> &scores)
{
    int n = scores.size();
    bool seraj_turn = true;
    int seraj_score{}, diana_score{};
    for (int i = 0, j = n - 1; i <= j; )
    {
        if (seraj_turn)
        {
            if(scores[i] > scores[j])
            {
                seraj_score += scores[i];
                i++;
            }
            else
            {
                seraj_score += scores[j];
                j--;
            }
            seraj_turn = false;
        }
        else
        {
            if(scores[i] > scores[j])
            {
                diana_score += scores[i];
                i++;
            }
            else
            {
                diana_score += scores[j];
                j--;
            }
            seraj_turn = true;
        }
    }
    cout << seraj_score << " " << diana_score << endl;
}

int main()
{

    int n{};
    cin >> n;
    vector<int> scores(n);
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }
    solve(scores);
}