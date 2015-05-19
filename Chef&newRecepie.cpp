#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t,n;
	scanf("%d",&t);
	for(;t>0;t--)
	{
		scanf("%d",&n);
		int a[n];
		memset(a,0,sizeof(a));
		
		int i,f=0;
		long long int sum=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			
			sum+=a[i];
			
			if(a[i]<2)
			f=1;	
		}
		
		if(f==1)
		printf("-1\n");
		else
		{
			sort(a,a+n);
			sum-=(a[0]-2);
			printf("%lld\n",sum);
		}
	}
	return 0;
} 
