#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include<set>
#include<iomanip>
#include<cstring>
#include<cctype> //islower () issuper () for check the first char
#include<algorithm>
#include<cmath>
#define sortarray sort(arr,arr+x);
#define rev reverse(s1.begin(), s1.end());
#define uppertolowers1 transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
#define uppertolowers2 transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define maxelementofvector *max_element(digit.begin(),digit.end());
using namespace std;
int main ()
{
    speed;
    int x;
    cin>>x;
    int temp=0,temp1=1,sum=0;
    for (int i=0;i<x;i++)
    {
        if (i==0)
        cout<<temp<<sp;
        if (i==1)
        cout<<temp1<<sp;
        if (i>1)
        {
            sum=temp+temp1;
            if (i==x-1)
            cout<<sum;
            else
            cout<<sum<<sp;
            temp=temp1;
            temp1=sum;
            
        }
    }
    cout<<endl;
    return 0;
}