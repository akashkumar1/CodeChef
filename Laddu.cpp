/*
Akash Kumar
iiitd
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	char parse[100];
	fgets(parse,100,stdin);
	
	for(;t>0;t--)
	{
	   // cout<<"t is "<<t<<endl;
		int f=0;
		char s[1000];
		fgets (s, 100, stdin);
		
		string r="";
		
		//cout<<s<<endl;
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]!=' ')
			{
				r+=s[i];
			}
			else
			{
				if(s[i+1]=='I')
				f=0;
				else
				f=1;
				
				break;
			}
		}
		
		//cout<<"r is "<<r<<endl;
		int q=atoi(r.c_str());
	//	cout<<"q is"<<q<<endl;
		
		long long int score=0; 
		for(;q>0;q--)
		{
			char h[100];
			fgets (h, 100, stdin);
			
			if(h[0]=='C')
			{
				if(h[8]=='W')
				{
					string  y;
					for(int j=12;j<strlen(h);j++)
					y+=h[j];
					
					int v=atoi(y.c_str());
					
					if(v<=20)
					score+=300+(20-v);
					else
					score+=300;
				}
				else
				{
					score+=50;
				}
			}
			else if(h[0]=='T')
			{
				score+=300;
			}
			else
			{
				string  y;
				for(int j=10;j<strlen(h);j++)
			        y+=h[j];
				
				int v=atoi(y.c_str());
				
				score+=v;
			}
		//	cout<<score<<endl;
		}
		
		if(f==0)
		cout<<score/200<<endl;
		else
		cout<<score/400<<endl;
	}
	return 0;
}
