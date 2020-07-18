#include<bits/stdc++.h>

using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,m,s,e;
		cin>>n>>m;
		int ar[n],freq[n]={0};
		for(long long int i=0;i<n;i++)
		{
			ar[i]=1;;
		}
		while(m--)
		{
			cin>>s>>e;
			freq[s-1]++;
			freq[e-1]++;
		}
		
		if(m%2==0)
		{
			cout<<"1"<<endl;
			for(long long int i=0;i<n;i++)
			{
				cout<<ar[i]<<" ";
			}
		}
		else
		{
			for(long long int i=0;i<n;i++)
			{
				if(freq[i]%2==0)
				continue;
				else
				{
					ar[i]++;
					break;
				}
			}
			cout<<"2"<<endl;
			for(long long int i=0;i<n;i++)
			{
				cout<<ar[i]<<" ";
			}
		}
		cout<<endl;		
	}
	return 0;
}
