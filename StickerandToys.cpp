#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,s,t,sum=0,dif=0,max;
		cin>>n>>s>>t;
		sum=s+t;
		dif=sum-n;
		s=s-dif;
		t=t-dif;
		//cout<<s<<" "<<t<<endl;
		max=t>s?t:s;
		cout<<max+1<<endl;
	}
	return 0;
}
