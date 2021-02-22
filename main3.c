#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[100],vow[100],revstr[100];
    int i,j=0,n,count=0;
    for(i=0;str[i]!='\0';i++)
    {
        scanf("%c",&str[i]);
    }
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            vow[j]=str[i];
            count++;
            j++;
        }   
    }
    for(i=0;i<n;i++)
    {
             if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
             {
                 count=count-1;
                 revstr[i]=vow[count];
             }
            else
            {
                revstr[i]=str[i];
            }
    }
    for(i=0;revstr[i]!='\0';i++)
    {
        printf("%c",revstr[i]);
    }
    return 0;
}