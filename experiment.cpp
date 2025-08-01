#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,co=0,ra=0,sa=0,sum=0,c=0;
    char s1;
    cin >> x;
    int i=0;
    while (i<x)
    {
        int q;
        cin>>q>>s1;
        if (s1=='C')
        {
            sum=sum+q;
            co=co+q;
        } else if (s1=='R')
        {
            sum=sum+q;
            ra=ra+q;
        }else if (s1=='S')
        {
            sum=sum+q;
            sa=sa+q;

        }
       // cout<<sum<<endl;
       // c++;
        i++;

    }
    
    

    
    //cout<<c<<endl;
    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",co);
    printf("Total de ratos: %d\n",ra);
    printf("Total de sapos: %d\n",sa);
    printf("Percentual de coelhos: %.2f %%\n",static_cast<float>(co*100)/sum);
    printf("Percentual de ratos: %.2f %%\n",static_cast<float>(ra*100)/sum);
    printf("Percentual de sapos: %.2f %%\n",static_cast<float>(sa*100)/sum);

    return 0;
}