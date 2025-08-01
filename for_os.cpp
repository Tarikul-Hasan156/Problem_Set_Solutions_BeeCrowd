#include<bits/stdc++.h>
using namespace std;
void isprime (int x)
{
    int co=0;
    for (int i=1;i<=x;i++)
    {
        if (x%i==0)
        co++; 
    }
    if (co>2)
    cout<<"the number is not prime"<<endl;
    else
    cout<<"the number is prime"<<endl;
}
int main ()
{
    int x;
    cin>>x;
    isprime(x);
    return 0;
}