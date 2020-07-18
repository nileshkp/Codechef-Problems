#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,q,res,min=LLONG_MAX;
	cin>>n;
	long long int ar[n];
	for(long long int i=0;i<n;i++)
	cin>>ar[i];
	for(long long int i=0;i<n;i++)
	{
		cin>>q;
		res=q/ar[i];
		if(res<min)
		min=res;
	}
	cout<<min<<endl;
	return 0;
}
