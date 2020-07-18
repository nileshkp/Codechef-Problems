#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n;
		cin>>n;
		
		long int a[n],b[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<n;i++)
		cin>>b[i];
		long long int dis=0;
		long int ax=0,bx=0;
		for(int i=0;i<n;i++)
		{
			if(ax==bx && a[i]==b[i])
			{
				dis+=a[i];
			}
			ax+=a[i];
			bx+=b[i];
		}
		cout<<dis<<endl;
	}
	return 0;
}
