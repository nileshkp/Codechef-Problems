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
		long int ar[n]={0},h[n],tmp,lb,ub,sum=0,sum2=0;
		for(long int i=1;i<=n;i++)
		{
			cin>>tmp;
			lb=i-tmp-1;
			ub=i+tmp-1;
			if(lb<0)
			lb=0;
			if(ub>n)
			ub=n-1;
			sum+=(ub-lb);
		}
		for(long int i=0;i<n;i++)
		{
		    cin>>h[i];
		    sum2+=h[i];
		}
		cout<<sum<<" "<<sum2<<endl;
		if(sum!=sum2)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
	
	return 0;
}
