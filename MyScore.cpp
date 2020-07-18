#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ar[8]={0};
		/*for(int i=0;i<8;i++)
		{
			cout<<ar[i];
		}
		cout<<"\n";*/
		while(n--)
		{
			int p,s;
			cin>>p>>s;
			if(p>=9)
			continue;
			if(ar[p-1]<s)
			{
				ar[p-1]=s;
			}
		}
		/*for(int i=0;i<8;i++)
		{
			cout<<ar[i];
		}
		cout<<"\n";*/
		int sum=0;
		for(int i=0;i<8;i++)
		{
			sum+=ar[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}
