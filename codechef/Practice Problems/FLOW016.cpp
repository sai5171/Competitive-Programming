
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int a,b,c;
        scanf("%d %d",&a,&b);
        c=a*b;
        if(a<b)
        {
            int temp=a;
            a=b;
            b=temp;
        }
        while(b!=0)
        {
            int rem=a%b;
            a=b;
            b=rem;
        }
        printf("%d %d\n",a,c/a);
    }
    return 0;
} 
