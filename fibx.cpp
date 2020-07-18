#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int arr[n];
	set<long long int>s;
	long long int l=0,r;
	for(long long int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(long long int i=0;i<n;i++)
	{
		pair<set<long long int>::iterator,bool>p = s.insert(arr[i]);
		if(p.second==false)
		{
			l=i;
			break;
		}
	}
	if(l==0)
	{
		cout<<"0"<<endl;
		return 0;
	}	
	for(long long int i=n-1;i>=l;i--)
	{
		pair<set<long long int>::iterator,bool>p = s.insert(arr[i]);
		if(p.second==false)
		{
			r=i;
			break;
		}
	}
	cout<<(r-l+1)<<endl;
	return 0;
}
