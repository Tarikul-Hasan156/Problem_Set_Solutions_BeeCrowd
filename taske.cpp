#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int main()
{
    speed;
    int x,tst=0; 
    ll m,n,k, c = 0,  sum = 0,l;
    cin >> x;
    
        while (x--)
        {
            tst++;
            cin >> m >> n;
           while (m--)
           {
            
                cin >> k >> l;

                sum = n / k;

                c += sum;
           }
           cout<<"Case"<<" "<<tst<<":"<<" "<<c<<endl;
           c=0;
        }

    return 0;
}