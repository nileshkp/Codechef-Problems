#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int n=t;
	t++;
	while(t--)
	{
		
		string str;
		getline(cin,str);
		if(n==t)
		continue;
		cout<<str<<endl;
	}
	
	return 0;
	
}

