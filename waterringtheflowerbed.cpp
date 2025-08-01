#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x,  c = 0,  sum = 0;
    long long m,n,k,l;
    cin >> x;
    
        for (int i = 1; i <= x; i++)

        {
            cin >> m >> n;
            for (int j = 1; j <= m; j++)
            {
                cin >> k >> l;

                sum = n / k;

                c += sum;
            }
            printf("Case %d: %d\n", i, c);
            // sum=0;
        }
    

    return 0;
}