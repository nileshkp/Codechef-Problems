#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		long int flg=0,cnt=0,tmp=0;
		vector <int> arc;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='1')
			cnt++;
		    if(s[i]=='0' || i==(s.size()-1))
			{
				if(cnt!=0)
				{
					if(cnt%2==0)
					{
						arc.push_back(2);
					}
					else
					arc.push_back(1);
				}
				cnt=0;	
			}
		}
		for(int i=0;i<(arc.size()-1);i++)
		{
			if(arc[i]==2)
			continue;
			else
			{
				if(arc[i+1]==2)
				arc[i+1]==1;
				else
				arc[i+1]==2;
			}
		}
		if(arc[(arc.size()-1)]==1)
		cout<<"WIN"<<endl;
		else
		cout<<"LOSE"<<endl;
	}
	return 0;	
}
