#include<stdio.h>
#include<string.h>

int main()
{
	long long int t;
	scanf("%lld",&t);
	
	for(;t>0;t--)
	{
		long long int n,val,i,total;
		char s[100];
		
		scanf("%s",&s);
		scanf("%lld",&n);
		
		val=0;
		for(i=0;i<strlen(s);i++)
		{
			if(s[i]=='T')
			val+=2;
			else
			val+=1;
		}
		
		total=12*n;
		long long int ans=0,r=val*1+1;
		i=1;
		
		while(r<=total)
		{
		//	printf("%lld\n",r);
			ans+=(total-r)+1;
			i++;
			r=val*i+1;
		}
		
		printf("%lld\n",ans);
	}
	
	return 0;
}
