#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned long long int n,k,cnt=0;
		cin>>n>>k;
		while(n!=0)
		{
			if(n%k==0)
			{
				cnt++;
				n=n/k;
			}
			else
			{
				cnt++;
				n--;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
