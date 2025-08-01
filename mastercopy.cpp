#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        int N, start;
        cin >> N >> start;

        string winner;
        if (N % 2 == 1)
        {
            if (start == 1)
            {
                winner = "Oddius";
            }
            else
            {
                winner = "Evenius";
            }
        }
        else
        {
            if (start == 1)
            {
                winner = "Evenius";
            }
            else
            {
                winner = "Oddius";
            }
        }

        cout << "Case " << i << ": " << winner << endl;
    }

    return 0;
}
