#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[5];
		int p;
		for(int i=0;i<5;i++)
		{
			cin>>a[i];
		}
		cin>>p;
		int res=0;
		for(int i=0;i<5;i++)
		{
			res+=a[i]*p;
		}
		if(res<=120)
		cout<<"No"<<endl;
		else
		cout<<"Yes"<<endl;
	}
}
