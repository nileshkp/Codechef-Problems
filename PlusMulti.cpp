#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,a,tcnt=0,zcnt=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			if(a==2)
			tcnt++;
			if(a==0)
			zcnt++;
		}
		long int res,res1,res2;
		res1=(tcnt*(tcnt-1))/2;
		res2=(zcnt*(zcnt-1))/2;
		res=res1+res2;
		cout<<res<<endl;
	}
	return 0;
}
