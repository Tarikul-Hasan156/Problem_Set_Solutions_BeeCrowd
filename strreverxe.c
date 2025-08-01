#include<stdio.h>
int main ()
{
    int x,count=0;

    char str1[50],str2[50];
    printf("Please enter your string :");
    gets(str1);
    int i;
    for (i=0;str1[i]!='\0';i++)
    {
        count++;
    }
    int j;
    for (j=0,i=count-1;i>=0;i--,j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';
    printf("%s",str2);
    return 0;

}