//reference: "https://comeoncodeon.wordpress.com/tag/lucas/"
 
 
#include<bits/stdc++.h>
using namespace std;
long long int countFact(long long int n,long long int p)
{
    long long int k=0;
    while (n>=p)
    {
        k+=n/p;
        n/=p;
    }
    return k;
}
 long long int pow1(long long int a,long long int b,long long int MOD)
{
    long long int x=1,y=a;
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x=(x*y);
            if(x>MOD) x%=MOD;
        }
        y = (y*y);
        if(y>MOD) y%=MOD;
        b /= 2;
    }
    return x;
}
 
long long int InverseEuler(long long int n,long long int MOD)
{
    return pow1(n,MOD-2,MOD);
}
 
long long int factMOD(long long int n,long long int MOD)
{
    long long int res = 1;
    while (n > 0)
    {
    	int i,m;
        for (i=2, m=n%MOD; i<=m; i++)
            res = (res * i) % MOD;
        if ((n/=MOD)%2 > 0)
            res = MOD - res;
    }
    return res;
}
 
long long int fact(long long int n,long long int r,long long int MOD)
{
    if (countFact(n, MOD) > countFact(r, MOD) + countFact(n-r, MOD))
        return 0;
 
    return (factMOD(n, MOD) *
            ((InverseEuler(factMOD(r, MOD), MOD) *
            InverseEuler(factMOD(n-r, MOD), MOD)) % MOD)) % MOD;
}
 
long long int min(long long int a,long long int b)
{
		return a<b?b:a;
}
 
int main()
{
	long long int t,n,a,b,i,j,mod=1000003;
 
	scanf("%lld",&t);
	for(;t>0;t--)
	{
		scanf("%lld %lld %lld",&n,&a,&b);
 
		long long int sum=0,m=b-a+1;
			long long int a1=(fact(m+n,m,mod)-1+mod)%mod;
 
		printf("%lld\n",a1);
	}
 
	return 0;
}
 
