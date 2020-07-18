#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	long long int t;
	cin>>t;
	while(t--)
	{
		long int k;
		cin>>k;
		unsigned long long int res;
		res=10+4*pow(2,k)-8;
		cout<<res%1000000007<<endl;
	}
	return 0;
}
