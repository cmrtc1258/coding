/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
int main()
{
    int a[100],n,i,j;
    scanf("%d",&n);
    int max[n],count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if((a[i]-a[i+1]==1) || (a[i]-a[i+1]==-1))
        {
            max[i+1]=a[i]*a[i+1];
            count++;
        }
    }
    for(i=1;i<count;i++)
    {
        if(max[0]<max[i])
        max[0]=max[i];
    }
    printf("%d",max[0]);
    
    return 0;
}