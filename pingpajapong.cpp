#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int c,p,k,d;
		cin>>c>>p>>k;
		d=(c+p)/k;
		if(d%2==0)
		cout<<"Chef"<<endl;
		else
		cout<<"Paja"<<endl;
		
	}
	return 0;
}
