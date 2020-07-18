#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned long long int res=0;
		for(int i=0;i<=36;i++)
		{
			res=res+pow(2,i);
		}
		cout<<res<<endl;
	}
	return 0;
}
