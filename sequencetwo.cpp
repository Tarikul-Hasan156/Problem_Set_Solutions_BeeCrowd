#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int I=1,J=7;
    for (int i=0;i<9;i++)
    {
        if (I<=9)
        {
            for (int i=0;i<3;i++)
            {
                printf("I=%d ",I);
                printf("J=%d",J);
                J--;
                printf("\n");

            }
        }
        J=7;
       // printf("\n");
        I=I+2;
    }
    return 0;
}