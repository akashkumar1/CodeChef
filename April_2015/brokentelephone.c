#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	
	int t,n,i;
	
	scanf("%d",&t);
	for(;t>0;t--)
	{
		scanf("%d",&n);
		long long int a[n];
		
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		
		long long int ans=0,f=0;
		int c=0;
		i=0;
		while(i<n-1)
		{
			c=0;f=0;
			while(a[i]!=a[i+1] && i<n-1)
			{
				c++;
				i++;
				
				if(a[i]==a[i+1] || i==n-1)
				f=1;
			}
			
			if(f==1)
			ans+=c+1;
			
			//printf("c is %d\n",c);
			//printf("i is %d\n",i);
			i++;
		}
		
		printf("%lld\n",ans);
	}
	return 0;
}
