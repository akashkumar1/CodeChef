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
 
int main()
{
	cout<<"1"<<endl;
	cout<<"3 1 5 5"<<endl;
	cout<<"3 4 4 3"<<endl;
	
	fflush(stdout);
	int a1;
	cin>>a1;
	
	if(a1== -1)
	{
		cout<<"2"<<endl;
		cout<<"3"<<endl;
	}
	else if(a1==2)
	{
		cout<<"2"<<endl;
		cout<<"5"<<endl;
	}
	else if(a1==0)
	{
		cout<<"2"<<endl;
		cout<<"2"<<endl;
	}
	else if(a1==-2)
	{
		cout<<"2"<<endl;
		cout<<"4"<<endl;
	}
	else 
	{
		cout<<"2"<<endl;
		cout<<"1"<<endl;
	}
	return 0;
} 
