#include<bits/stdc++.h>
using namespace  std;

int main()
{
	int n;
	cin>>n;
	string st;
	cin>>st;
	int cnt=0;
	for(int i=0;i<n-1;i++)
	{
		if(st[i]==st[i+1])
			cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}