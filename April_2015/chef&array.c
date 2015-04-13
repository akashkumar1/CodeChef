#include<stdio.h>
#include<string.h>
 
long long int min(long long int a,long long int b)
{
	return a>b?b:a;
}
 
long long int ma(long long int a,long long int b)
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
		
		long long int sum=0,m=b-a+1,val=m;
		
		long long int a1=m,a2;
		sum=(sum+a1)%mod;
			
		val++;
		a2=a1;
		for(i=2;i<=n;i++)
		{
			a2=((a2*val)/i)%mod;
			sum=(sum+a2)%mod;
			val++;
		}	
		
		printf("%lld\n",sum);
	}
	
	return 0;
} 
