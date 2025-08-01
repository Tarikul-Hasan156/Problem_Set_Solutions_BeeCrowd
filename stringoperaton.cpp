#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string str1,str2,str3;
    cin>>str1>>str2;
    str3= str1+" "+str2;//concat two string
    cout<<str3<<endl;
    int l = str3.size();
    cout<<str3.size()<<endl;//length of a string
    cout<<str3.substr(3,3)<<endl;//substring
    cout<<str3.find("hlw")<<endl;//find the index of substring
    cout<<str3.insert(l,"world")<<endl;//insert string
    cout<<str3.erase(6,5)<<endl;//deletion a string
    return 0;
}
