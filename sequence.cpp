#include<bits/stdc++.h>
using namespace std;
int main ()

{
    int I=1,J=60;
    for (int i=0,j=0;i<=12 || j<=12;i++,j++)
    {
        if (i<=12)
        {
            printf("I=%d ",I);
            I=I+3;
        }
        if (j<=12)
        {
            printf("J=%d",J);
            J=J-5;
        }
        printf("\n");


    }
    return 0;
}