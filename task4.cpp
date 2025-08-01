#include<iostream>
using namespace std;
int main()
{
    string text = {"ABCDEFGHINURABBFA"};
    string pattern = {"NUR"};
    int i,j;
    int n = text.length();
    int m = pattern.length();
    for(i=0; i<=n-m;++i)
    {
        for(j=0;j<m;++j)
        {
            if(text[i+j]!=pattern[j])
                break;
        }
        if(j == m)
        {
            cout<<"Pattren are found at index = "<<" "<<i<<endl;
            break;
        }

    }
    return 0;
}
