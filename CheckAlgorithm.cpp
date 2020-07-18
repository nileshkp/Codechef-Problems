#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		int cnt=0,cnti=0;
		for(int i=1;i<str.size();i++)
		{
			if(str[i]==str[i-1])
			{
				cnti++;
			}
			else
			{
				string c=to_string(cnti);
				cnti=0;
				cnt+=1;
				cnt+=c.size();
			}
		
		}
		cnt+=2;
		if(cnt<str.size())
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}
