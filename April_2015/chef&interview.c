#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    long long int t,n,ans=0,i;
    scanf("%lld",&t);
    for(;t>0;t--)
    {
		ans=0;
        scanf("%lld",&n);
        
            for(i=1;i<=sqrt(n);i++)
            {
                if(n%i==0)
                {
                    if(i==n/i)
                        ans+=i;
                    else
                        ans+=i+n/i;
                }
            }
        
        printf("%lld\n",ans);
        
    }
    return 0;
}
