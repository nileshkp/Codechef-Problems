#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,m,q;
		cin>>n>>m>>q;
		long long int row[n]={0},col[m]={0};
		while(q--)
		{
			long long int r,c;
			cin>>r>>c;
			row[r-1]++;
			col[c-1]++;
		}
		long long int rev=0,rod=0,cev=0,cod=0;
		for(long long int i=0;i<n;i++)
		{
			if(row[i]%2==0)
			rev++;
			else
			rod++;
		}
		for(long long int i=0;i<m;i++)
		{
			if(col[i]%2==0)
			cev++;
			else
			cod++;
		}
		long long int res=0;
		res+=(cod*rev);
		res+=(rod*cev);
		cout<<res<<endl;
	}
	return 0;
	
}
