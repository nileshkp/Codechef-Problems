#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long long int mod(string s,long long int tmp);
	cin>>t;
	while(t--)
	{
		long long int n,res;
		string k;
		cin>>n>>k;
		res=mod(k,n);
		if(res==0)
		{
			cout<<"0"<<endl;
			continue;
		}
		if(n%2!=0)
		{
			if(res<n/2)
			{
				cout<<res*2<<endl;
			}
			else if(res==n/2)
			{
				cout<<(n-res-1)*2<<endl;
			}
			else
			{
				cout<<(n-res)*2<<endl;
			}
		}
		else
		{
			if(res<n/2)
			{
				cout<<res*2<<endl;
			}
			else if(res==n/2)
			{
				cout<<res*2-1<<endl;
			}
			else if(res==n/2+1)
			{
				cout<<(n-res)*2+1<<endl;
			}
			else
				cout<<(n-res)*2<<endl;
		}
	}
	return 0;
}
long long int mod(string num,long long int a) 
{ 
    long long int res = 0; 
    for (int i = 0; i < num.length(); i++) 
         res = (res*10 + (int)num[i] - '0') %a; 
    return res; 
} 

