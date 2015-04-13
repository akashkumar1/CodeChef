#include<stdio.h>
#include<string.h>


int main()
{
	long long int n,m,a,b,c,i;
	scanf("%lld %lld",&n,&m);
	
	static long long int r[1000001];
	memset(r,0,sizeof(r));
	
	for(;m>0;m--)
	{
		scanf("%lld %lld %lld",&a,&b,&c);
		r[a]=1;
		r[b]=1;
	}
	
	int ct=0;
	for(i=1000000;i>=0;i--)
	{
		if(r[i]==1)
		{
			printf("%lld ",i);
			ct++;	
		}
		
		
		if(ct==n/2)
		break;
	}
	printf("\n");
	
	return 0;
}
