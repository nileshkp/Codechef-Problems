#include<bits/stdc++.h>
using namespace std;


int main()
{
	long int t;
	cin>>t;
	
	unsigned long long int ar[64],sum=0;
	for(int i=0;i<64;i++)
	{
		ar[i]=pow(2,i);
		cout<<i<<" : "<<ar[i]<<endl;
	}
	cout<<endl;
	
	
	while(t--)
	{
		long long int x,y,l,r;
		cin>>x>>y>>l>>r;
		
		long long int tmp=x|y,tmp2=x&y;
		
		if(tmp<=r && tmp>=l)
		{
			cout<<tmp<<endl;
			continue;
		}
		else
		{
			cout<<tmp-r<<endl;
		}
	}
	return 0;
}
