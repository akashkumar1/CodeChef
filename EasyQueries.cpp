/*
Akash Kumar
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
 
 
long long int comp(long long int *v,long long int a,long long int b,long long int l,long long int rt,long long int ind)
{
    if (b < l || a > rt)
        return INT_MAX;
 
    
    if (l <= a && rt >= b)
        return v[ind];
 
    
    long long int mid = a + (b -a)/2;
    return min1(comp(v, a, mid, l, rt, 2*ind+1),
                  comp(v, mid+1, b, l, rt, 2*ind+2));
}
 
long long int tree_recur(long long int r[],long long int a,long long int b,long long int *v,long long int ind)
{
    if (a == b)
    {
        v[ind] = r[a];
        return r[a];
    }
 
    long long int mid = a + (b -a)/2;
    v[ind] =  min1(tree_recur(r, a, mid, v, ind*2+1),
                     tree_recur(r, mid+1, b, v, ind*2+2));
    return v[ind];
}
 
long long int *tree(long long int r[],long long int n)
{
 
    long long int *v = new long long int[2*(long long int)pow(2, (long long int)(ceil(log2(n)))) - 1]; 
    tree_recur(r, 0, n-1, v, 0);
 
    return v;
}
 
int main()
{
    long long int n,q;
    cin>>n>>q;
    
    long long int r[n];
    for(int i=0;i<n;i++)
        cin>>r[i];
    
    long long int *v = tree(r, n);
    
    long long int ans=0;
    for(;q>0;q--)
        {
        long long int a,b,c,d,k,l,rt;
        cin>>a>>b>>c>>d>>k;
        
        l=(a*max1(ans,0)+b)%n+1;
		rt=(c*max1(ans,0)+d)%n+1;
		
		
		if(l>rt)
		{
			long long int tmp=l;
			l=rt;
			rt=tmp;
		}	
        
        if(k==1)
            {
            ans=comp(v, 0, n-1, l-1, rt-1, 0);
            cout<<ans<<endl;
        }
        else
            {
            long long int p[rt-l+1],j=0,ln=rt-l+1,ind=0;
		
			for(int i=l-1;i<=rt-1;i++)
			{
				p[j]=r[i];
				j++;
				ind=j;
			}
			sort(p,p+ind);
		
			long long int last=p[0];
			for(int i=1;i<ind;i++)
			{
				if(p[i]==last)
				{
					p[i]=INT_MAX;
				}
				else
				{
					last=p[i];
				}	
			}
			
			sort(p,p+ind);
			
			if(ln<k || p[k-1]==INT_MAX)
			ans=-1;
			else
			ans=p[k-1];
			
			cout<<ans<<endl;	
        }
    }
    
 
    return 0;
} 
