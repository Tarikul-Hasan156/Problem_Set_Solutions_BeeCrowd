#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y,sum=0;
    while (1)
    {
        cin>>x;
        while (1)
        {
            cin>>y;
            if (y==0 || y<0)
            continue;
            else
            break;
        }
        int c=0,j=0;
        for (int i=0;i<y;i++)
        {
            c++;
            

        }
        for (int i=0;i<c;i++)
        {
            sum+=x;
            x++;
            j++;
        }
        if (j>0)
        break;
        
       
    }
    cout<<sum<<endl;
    return 0;
}