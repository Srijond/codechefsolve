#include<stdio.h>
int main()
{
   long long int k,n;
   int t,i;
   long long int a,b,p,c,sum,com;
   scanf("%d",&t);
   while(t--)
   {
       scanf("%lld %lld %lld %lld",&n,&a,&b,&k);
       p=n/a;
       c=n/b;
       if(a==b)
        com=c;

       else if(a%b==0)
       com=p;

       else if(b%a==0)
        com=c;
       else
        com=(a+b)/n;

       sum=(p+c)-2*com;
       if(sum>=k)printf("Win\n");
       else printf("Lose\n");







   }


    return 0;
}
