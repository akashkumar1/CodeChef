/*
Author: Akash Kumar
iiitd
*/

#include<bits/stdc++.h>
using namespace std;
 
long long int min(long long int a, long long int b)
{
	return a>b?b:a;	
}
 
struct node{
long long a,b,r;	
}; 

bool comp(struct node more,struct node less)
{
	return more.r<less.r;	
}

int main()
{
	long long n,w,l;
	cin>>n>>w>>l;
	
	struct node v[n];
	for(int i=0;i<n;i++)
	{
		cin>>v[i].a;
		cin>>v[i].b;
	}
	
	for(int i=0;i<n;i++)
	{
		if(v[i].a<l)
		{
			if((((l-v[i].a-1)/v[i].b)+1)==(l-v[i].a)/v[i].b)
			v[i].r=(l-v[i].a)/v[i].b;
			else
			v[i].r=((l-v[i].a)/v[i].b)+1;
		}
		else
		{
			v[i].r=0;
		}	
		
		//cout<<v[i].r<<endl;
	}
	
	sort(v,v+n,comp);
	
	long long  val=0,ans=0,f=0,sum=0,y=0,ind1=0,ind2=0,sum1=0;
	for(int i=0;i<n;i++)
	{
	//	if(v[i].r==0)
	//	continue;
		
		y+=v[i].a;
		sum+=v[i].b;
		
		val=y+sum*v[i].r;
		ans=v[i].r;	
		
		
		
			
		if(val>=w)
		{
			if(i==0 || v[i].r==0)
			{
				ans=v[i].r;
				f=1;
				break;	
			}
			else
			{
				f=2;
			
				y-=v[i].a;
				sum-=v[i].b;
				val=y+sum*v[i-1].r;
				ind1=v[i-1].r;
				ind2=v[i].r;
			
				ans=v[i].r;
				break;
			}
		}
	}
	
	if(f==1)
	cout<<ans<<endl;
	else if(f==2)
	{
		long long k,p=0;
		val=y+sum*ind1;
		for(k=ind1+1;k<ind2;k++)
		{
			val=y+sum*k;
			if(val>=w)
			{
				p=1;
				cout<<k<<endl;
				break;
			}
		}
		
		if(p==0)
		cout<<ind2<<endl;
	}
	else
	{
		long long c=ans,rm=0;
		w-=val;
		
		if((((w-1)/sum)+1)==(w/sum))
		rm=w/sum;
		else
		rm=w/sum+1;
		
		c+=rm;
		cout<<c<<endl;
	}
	
	return 0;
} 

