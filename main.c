#include<stdio.h>
int main()
{
    int n,num[100],i,j,k,pos,flag=0,t,index;
    printf("Enter no.of elements in array\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Enter rotating index\n");
    scanf("%d",&k);
    printf("Enter target element\n");
    scanf("%d",&t);
    for(j=0;j<n;j++)
    {
        if(t==num[j])
        {
            flag=1;
            pos=j+k+1;
            printf("index=%d",pos);
        }
    }
    if(flag==0)
    printf("-1");
    return 0;
}