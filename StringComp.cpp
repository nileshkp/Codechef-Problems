#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,r;
		cin>>s>>r;
		long int l=s.size(),cnt=0,cnt2=0,cnt3=0,in=0;
		long int max=0;
		int ar[l]={0};
		for(long int i=0;i<l;i++)
		{
			if(s[i]!=r[i])
			{
				ar[i]=1;
				cnt++;
				if(cnt==1)
				in=i;
				if(i>max)
				max=i;	
			}
			//cout<<ar[i];	
		}
		//cout<<endl<<"Max:"<<max<<" In:"<<in<<endl;
	
		for(long int i=0;i<l-1;i++)
		{
			if(ar[i]==1 && ar[i+1]==0)
			cnt2++;
		}
		if(ar[l-1]==1)
		cnt2++;
		//cout<<"CNT:"<<cnt<<" CNT2:"<<cnt2<<endl;
		long long  int res=cnt2*cnt;
		//cout<<"res:"<<res<<endl;
		if(cnt==1 || cnt==0)
		{
			cout<<cnt<<endl;
			continue;
		}
		
		long long int fin2,res2;
		
		res2=max-in+1;
		//cout<<"res2:"<<res2<<endl;
		
		fin2=res>res2?res2:res;
		cout<<fin2<<endl;
	}
}
