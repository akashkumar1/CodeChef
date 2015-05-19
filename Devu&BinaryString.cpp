#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t,n,k;
	scanf("%d",&t);
	for(;t>0;t--)
	{
		scanf("%d %d",&n,&k);
		char s[n];
		scanf("%s",&s);
		
		int i=1,c=1,count=0;
		char prev=s[0];
	
	
		if(k==1)
		{
			int c1=0,c2=0;
			for(i=0;i<n;i++)
			{
				if(i%2==0)
				{
					if(s[i]=='0')
					c1++;
					else
					c2++;
				}	
				else
				{
					if(s[i]=='0')
					c2++;
					else
					c1++;
				}
			}
			
			if(c1>c2)
			{
				printf("%d\n",c2);
				for(i=0;i<n;i++)
				{
					if(i%2==0)
					printf("0");
					else
					printf("1");
				}
				printf("\n");
			}
			else
			{
				printf("%d\n",c1);
				for(i=0;i<n;i++)
				{
					if(i%2!=0)
					printf("0");
					else
					printf("1");
				}
				printf("\n");
			}
			
		}
		else
		{
			while(i<n)
			{
				if(s[i]==prev)
				{
					c++;
				}
				else
				{
					c=1;
				}
				
				if(k<c)
				{
					if(k>1)
					{
						if(s[i]==s[i+1])
						{
							if(s[i]=='0')
							s[i]='1';
							else
							s[i]='0';
							
							c=1;	
						}
						else 
						{
							if(s[i-1]=='0')
							s[i-1]='1';
							else
							s[i-1]='0';
							
							c=1;
						}
					}
					
					count++;
				}
			
			prev=s[i];
				i++;
			}
		
			int j=0;
			printf("%d\n",count);
			for(j=0;j<n;j++)
			printf("%c",s[j]);
			printf("\n");
		}
		
		
	}	
	
	return 0;
}  
