#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, I = 1, J = 7;
    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < 3; i++)

        {
            printf("I=%d ", I);
            printf("J=%d", J);
            J--;
            printf("\n");
        }
        // printf("\n");
        I = I + 2;
        // J = 7;
        if (I == 3)
            J = 9;
        else if (I == 5)
            J = 11;
        else if (I == 7)
            J = 13;
        else if (I == 9)
            J = 15;
    }
    return 0;
}