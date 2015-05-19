#include<stdio.h>
long long min(long long a,long long b)
{
	return a>b?b:a;	
}
 
long long gcd(long long a,long long b)
{
	if(b==0)
	return a;
	else 
	return gcd(b,a%b);	
} 
 
long long check(long long m,long long n)
{
	int flag=0;
	
	long long sqrt_n=gcd(m,n);
	//printf("%lld\n",sqrt_n);
	if(n==1)
	flag=0;
	else
	{
		while (sqrt_n>1)
	    {
	    	n/=sqrt_n;
	    	sqrt_n=gcd(sqrt_n,n);
	    	//printf("%lld\n",sqrt_n);
	    }
	}
    
    if(gcd(m,n)==1 && n!=1)
    flag=1;
    else
    flag=0;
    
    if(flag==0)
    return 1;
    else
    return 0;
}
 
int main()
{
	long long t,a,b;
	scanf("%lld",&t);
	for(;t>0;t--)
	{
		scanf("%lld %lld",&a,&b);
		int ans=check(a,b);
		if(ans==0)
		printf("No\n");
		else
		printf("Yes\n");	
	}
		
	return 0;
}  
