/*
Author: Akash Kumar
iiitd
*/

#include<bits/stdc++.h>
using namespace std;
 
long long int min1(long long int a, long long int b)
{
	return a>b?b:a;	
}
 
long long int max1(long long int a, long long int b)
{
	return a<b?b:a;	
}

int main()
{
	long long int t;
	cin>>t;
	
	for(;t>0;t--)
	{
		long long int n,m,s;
		cin>>n>>m>>s;
		
		long long int a[n+1],r[n+1],d[m];
		memset(a,0,sizeof(a)); 
		memset(r,0,sizeof(r));
		memset(d,0,sizeof(d));
		
		for(int i=0;i<m;i++)
		cin>>d[i];
		
		a[s]=1;
		long long int mod=1000000007;
		for(int i=0;i<m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(a[j]!=0)
				{
					if((j-d[i])>0)
					{
						if(r[j-d[i]]==0)
						r[j-d[i]]=a[j];
						else
						r[j-d[i]]= (r[j-d[i]]+a[j]+mod)%mod;
					}
					
					if((j+d[i])<=n)
					{
						if(r[j+d[i]]==0)
						r[j+d[i]]=a[j];
						else
						r[j+d[i]]= (r[j+d[i]]+a[j]+mod)%mod;
					}
					
					//r[j]=0;
				}
				else
				continue;
			}
			
			for(int j=1;j<=n;j++)
			{
				a[j]=r[j];
				r[j]=0;
				//cout<<a[j]<<" ";	
			}
			//cout<<endl;
		}
		
		for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";
		cout<<endl;
	}
		
	return 0;
} 

