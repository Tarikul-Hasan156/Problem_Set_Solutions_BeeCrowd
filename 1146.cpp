#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    while (1)
    {
        cin >> x;
        if (x==0)
        break;
        else
        {
            cout<<"1";
            for (int i=2;i<=x;i++)
            {
                cout<<" "<<i;
            }
        }
        cout<<endl;
    }

    return 0;
}