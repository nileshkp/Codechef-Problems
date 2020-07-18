#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int m,n;
		cin>>n>>m;

		long int ar[n],p[m];
		long int flg[m]={0};
		for(int i=1;i<=n;i++)
		{
			cin>>ar[i];
		}
		for(int i=1;i<=m;i++)
		{
			cin>>p[i];
			flg[i]=0;
		}

		for(int i=1;i<=m;i++)
			cout<<flg[i];
	}
	return 0;
}