#include<stdio.h>
int main()
{
    int l,b,w,c,tc,a;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    a=(l*b)-((l-2*w)*(b-2*w));
    tc=a*c;
    if(l<=2*w||b<=2*w)
    printf("Impossible");
    else
    printf("%d",tc);
    return 0;
}