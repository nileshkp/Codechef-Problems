#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,cnt=0;
		cin>>n;
		string per;
		cin>>per;
		string str;
		for(int i=1;i<n;i++)
		{
			cin>>str;
			//cout<<str<<"#"<<endl;
			for(int j=0;j<10;j++)
			{
				per[j]=per[j]^str[j];
			}
		}
		for(int j=0;j<10;j++)
		{
			if(per[j]=='1')
			{
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
