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
	long long int  a, b, c, d, e, f, r, s, t, m,L1, La, Lc, Lm, D1, Da, Dc,Dm, n,k ,q,mod=1000000007;
	 
	 scanf("%lld %lld %lld",&n,&k,&q);
	 
	 long long int arr[n+1];
	 memset(arr,0,sizeof(arr));
	 
	 long long int l[q+1];
	 memset(l,0,sizeof(l));
	 
	 long long int rt[q+1];
	 memset(rt,0,sizeof(rt));
	 
	 
	 	scanf("%lld %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld",&a,&b,&c,&d,&e,&f,&r,&s,&t,&m,&arr[1]);
	 	scanf("%lld %lld %lld %lld %lld %lld %lld %lld",&L1,&La,&Lc,&Lm,&D1,&Da,&Dc,&Dm);
	 	
	 	
	 	for(int x=2;x<=n;x++)
	 	{
	 		if(modular_pow(t,x,s)<= r)       
				arr[x] = (((((a*arr[x-1])%m)*arr[x-1])%m + (b*arr[x-1])%m + c%m)+m)% m;
			else
				arr[x] = (((((d*arr[x-1])%m)*arr[x-1])%m + (e*arr[x-1])%m + f%m)+m)%m;
	 	}
	 	
	 	
	 	for(int i=1;i<=q;i++)
	 	{
	 		L1 = ((La * L1)%Lm + Lc)% Lm;
			D1 = ((Da * D1)%Dm + Dc)% Dm; 
			long long int L = L1 + 1;
			l[i]=L;
			rt[i] = min(L + k - 1 + D1, n);
	 	}
	 	
	 	
	 	long long sum=0,pro=1;
	 	for(int i=1;i<=q;i++)
	 	{
	 		long long int min=10000000000;
	 		for(int j=l[i];j<=rt[i];j++)
	 		{
	 				if(min>arr[j])
	 				min=arr[j];
	 		}
	 		
	 		sum+=min;
	 		pro=((pro*min)+mod)%mod;
	 	}
	 	
	 	printf("%lld %lld\n",sum,pro);
	return 0;
} 
