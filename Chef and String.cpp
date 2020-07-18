#include<bits/stdc++.h>
using namespace std;

int  main()
{
	int t;
	cin>>t;
	while(n--)
	{
		string s;
		cin>>s;
		long int n=s.size();
		int cnt=0;
		for(long int i=0;i<n-1;i++)
		{
			if((s[i]=='x' && s[i+1]=='y') || (s[i]=='y' && s[i+1]=='x'))
			{
				cnt++;i++;
			}
		}
		cout<<cnt<<endl;
	}
}
