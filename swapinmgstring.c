#include<stdio.h>
int main ()
{
    char s1[50],s2[50],temp[50];
    gets(s1);
    gets(s2);
    strcpy(temp,s1);
        strcpy(s1,s2);
            strcpy(s2,temp);
            printf("%s",s1);
                        printf("%s",s2);

            return 0;



}
