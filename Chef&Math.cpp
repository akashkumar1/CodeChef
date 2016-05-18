#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int q;
	cin>>q;
	
	long long int a[51],mod=1000000007;
	memset(a,0,sizeof(a));
	
	a[0]=1;
	a[1]=1;
	for(int i=2;i<=50;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	
	for(;q>0;q--)
	{
		long long int k,x;
		cin>>x>>k;
		
		int ind=0;
		for(int i=0;i<=50;i++)
		{
			if(a[i]>x)
			{
				ind=i-1;
				break;
			}
		}
		
        if(k==1)
            {
            int c=0;
            for(int i=0;i<=50;i++)
                {
                if(a[i]==x)
                    c++;
            }
            cout<<c<<endl;
        }
        else if(k==2)
            {
            set<string> ans;
		long long int sum=0;
		for(int i=1;i<=ind;i++)
		{
			for(int j=1;j<=ind;j++)
			{
				
						if(a[i]+a[j]==x)
						{
							long long int r[2];
							r[0]=a[i];
							r[1]=a[j];
							
							sort(r,r+2);
							
							string s=to_string(r[0])+to_string(r[1]);
						    ans.insert(s);	
						}
					
			}
		}
		
		cout<<ans.size()%mod<<endl;
        }
        else if(k==3)
            {
            set<string> ans;
		long long int sum=0;
		for(int i=1;i<=ind;i++)
		{
			for(int j=1;j<=ind;j++)
			{
				for(int k=1;k<=ind;k++)
				{
						if(a[i]+a[j]+a[k]==x)
						{
							long long int r[3];
							r[0]=a[i];
							r[1]=a[j];
							r[2]=a[k];
							
							sort(r,r+3);
							
							string s=to_string(r[0])+to_string(r[1])+to_string(r[2]);
						    ans.insert(s);	
						}
					
				}
			}
		}
		
		cout<<ans.size()%mod<<endl;
        }
        else if(k==4)
            {
            set<string> ans;
		long long int sum=0;
		for(int i=1;i<=ind;i++)
		{
			for(int j=1;j<=ind;j++)
			{
				for(int k=1;k<=ind;k++)
				{
					for(int l=1;l<=ind;l++)
					{
						if(a[i]+a[j]+a[k]+a[l]==x)
						{
							long long int r[4];
							r[0]=a[i];
							r[1]=a[j];
							r[2]=a[k];
							r[3]=a[l];
							
							sort(r,r+4);
							
							string s=to_string(r[0])+to_string(r[1])+to_string(r[2])+to_string(r[3]);
						    ans.insert(s);	
						}
					} 
				}
			}
		}
		
		cout<<ans.size()%mod<<endl;
        }
        else
            {
              set<string> ans;
            int f=0,ind1,ind2,ind3,ind4,ind5;
            ind1=ind2=ind3=ind4=ind5=ind;
		long long int sum=0;
		for(int i=1;i<=ind;i++)
		{
            ind3=ind;
			for(int j=1;j<=ind2;j++)
			{
                if((a[j]+a[i])>x)
                {
                    ind2=j-1;
                   break;
                }
                ind4=ind;
				for(int k=1;k<=ind3;k++)
				{
                    if((a[j]+a[k]+a[i])>x)
                    {ind3=k-1;
                        break;
                    }
                    ind5=ind;
					for(int l=1;l<=ind4;l++)
					{
                        
                         if((a[j]+a[k]+a[l]+a[i])>x)
                         {ind4=l-1;
                          break;
                         }
                        
                        for(int m=1;m<=ind5;m++)
                            {
                            if((a[j]+a[k]+a[l]+a[m]+a[i])>x)
                            {ind5=m-1;
                             break;
                            }
                            
                            if(a[i]+a[j]+a[k]+a[l]+a[m]==x)
						{
							long long int r[5];
							r[0]=a[i];
							r[1]=a[j];
							r[2]=a[k];
							r[3]=a[l];
                            r[4]=a[m];
							
							sort(r,r+5);
							
							string s=to_string(r[0])+to_string(r[1])+to_string(r[2])+to_string(r[3])+to_string(r[4]);
						    ans.insert(s);	
						}
                        }
						
					} 
				}
			}
		}
		
		cout<<ans.size()%mod<<endl;
        }
		
	}
	
	return 0;
}
