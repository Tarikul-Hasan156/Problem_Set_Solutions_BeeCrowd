#include<bits/stdc++.h>
using namespace std;
int main ()

{
    int x,c1=1,c2=1,c3=1;
    cin>>x;
    for (int i=1;i<=x;i++)
    {
        for (int j=1;j<=2;j++)
        {
            if(j==1)

            {
                cout<<c1<<" "<<c1*c1<<" "<<c1*c1*c1<<endl;
            }else 
            {
                if (i==1)
                {
                    c2=c1;
                    c2++;
                     cout<<c1<<" "<<c2<<" "<<c1*c2<<endl;
                }
               
                else
                {
                    
                    cout<<c1<<" "<<(c1*c1)+1<<" "<<((c1*c1+1)*c1)-c3<<endl;
                    c3++;
                }
                
            }
           
          
        }
        c1++;
    }

    return 0;
}
