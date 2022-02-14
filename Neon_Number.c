#include<stdio.h>
int main()
{
    int n,a,r,s=0;
    scanf("%d",&n);
    a=n*n;
    while(a!=0)
    {
        r=a%10;
        s=s+r;
        a=a/10;
    }
    if(n==s)
    printf("Neon Number");
    else
    printf("Not Neon Number");
    return 0;
}