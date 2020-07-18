#include<bits/stdc++>
using namespace std;

int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		
		if(n==1 || n==2)
		{
			cout<<"0"<<endl;
			continue;
		}
		
		if(n%2==1)
		{
			cout<<n/2<<endl;
		}
		else
		{
			long long int tmp=n;
			while(tmp%2!=1)
			{
				tmp/=2;
			}
			if(tmp==1)
			{
				cout<<"0"<<endl;
				continue;
			}
			else
			cout<<tmp/2<<endl;
		}
	}
}
