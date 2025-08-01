#include <bits/stdc++.h>
#define sp " "
using namespace std;
int main()
{
    int x, n, m, c = 0;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> n >> m;
        c++;
        if (m == 1 )
        {
            if (n  % 2 == 1)
                cout<<"Case"<<sp<<c<<":"<<sp<<"Evenius"<<endl;
        }

        else if (m == 2 )
        {
            if (m%2==0)
            {
                cout<<"Case"<<sp<<c<<":"<<sp<<"Oddius"<<endl;
            }
        }
    }
    return 0;
}