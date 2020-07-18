#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,tmp,digsum=0,reqsum;
		cin>>n;
		unsigned long long int res;
		tmp=n;
		while(tmp!=0)
		{
			digsum+=tmp%10;
			tmp=tmp/10;
		}
		//cout<<digsum<<endl;
		if(digsum%10==0)
		{
			res=n*10;
		}
		else
		{
			reqsum=((digsum/10)+1)*10;
			res=n*10+(reqsum-digsum);
		}
		cout<<res<<endl;
	}
	return 0;
}
