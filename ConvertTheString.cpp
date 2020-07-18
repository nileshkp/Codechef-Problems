#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		string a,b;
		cin>>a;
		cin>>b;
		if(a==b)
		{
			cout<<"0"<<endl;
		}
		string c=b;
		int flg=1,fa=-1,fb=-1,bflg=0,aflg=0;
		int ar[n]={0};
		for(int i=0;i<n;i++)
		{
			if(a[i]=='a' && b[i]=='b')
			{
				flg=0;
				break;
			}
			if(a[i]=='a')
			{
				if(fa==-1)
				fa=i;	
			}
			if(a[i]=='b')
			{
				if(fb==-1)
				fb=i;	
			}
			if(a[i]>='a')
			{
				ar[i]=1;
			}
			if(a[i]>='b')
			{
				ar[i]=2;
			}
			
			if(b[i]=='b')
			{
				bflg=1;
			}
			if(b[i]=='a')
			{
				aflg=1;
			}
		}
		if(fa==-1 && aflg==1)
		{
			cout<<"-1"<<endl;
			continue;
		}
		if(fb==-1 && bflg==1)
		{
			cout<<"-1"<<endl;
			continue;
		}
		
		if(flg==0)
		{
			cout<<"-1"<<endl;
			continue;
		}
		
		
		for(int i=0;i<n;i++)
		{
			
		}
		
	}
	return 0;
}
