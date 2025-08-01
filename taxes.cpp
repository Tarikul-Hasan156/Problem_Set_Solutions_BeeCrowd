#include<bits/stdc++.h>
using namespace std;
int main ()
{
    float x;
    cin >> x;
    if (x>=0 && x<=2000)
    cout<<"Isento"<<endl;
    else if (x>2000 && x<=3000)
    printf("R$ %.2f\n",(x-2000)*0.08);
    else if (x>3000 && x<=4500)
    {
        int f1=x-2000;
        int f2=f1-1000;
        printf("R$ %.2f\n",(f2*0.18)+(1000*0.08));
    }else if (x>4500)
    {
        int f1=x-2000;
        int f2=f1-1000;
        int f3=f2-1500;
        printf("R$ %.2f\n",(1000*0.08)+(1500*0.18)+(f3*.28));
    }

    return 0;
}