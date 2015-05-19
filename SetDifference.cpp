/*
	AKASH KUMAR
	IIIT-DELHI
*/

#include<bits/stdc++.h>
using namespace std;

long long modular_pow(long long a, long long b, long long m)
{
long long remainder;
long long ans = 1;

while (b != 0)
{
remainder = b % 2;
b= b/2;

if (remainder == 1)
ans = (ans * a) % m;
a= (a * a) % m; 
}
return ans;
}



int main()
{
	long long t,n,mod=1000000007;
	
	scanf("%lld",&t);
	for(;t>0;t--)
	{
		scanf("%lld",&n);
		long long a[n],i,j,mul = (modular_pow(2, n-1,mod) - 1) % mod,ans = 0;
		
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		
		sort(a,a+n);
		
		for(i=0;i<n/2;i++)
		{
			ans = (ans + (a[n - 1 - i] - a[i]) * mul) % mod;
			mul = (mul - ((modular_pow(2, n - 2 - i,mod) + modular_pow(2, i,mod)+mod) % mod)+mod) % mod;
		}
		
		printf("%lld\n",ans);
		
	}
		
	return 0;
}

		
