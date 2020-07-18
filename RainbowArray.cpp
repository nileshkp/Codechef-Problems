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
		int ar[n],sub1[n/2],sub2[n/2],flg=0,flg1=0,flg2=0,flg3=0,flg4=0,flg5=0,flg6=0,flg7=0;
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
			if(ar[i]>=8)
			flg=1;
			if(i<n/2)
			{
				sub1[i]=ar[i];
				if(ar[i]==1)
				flg1=1;
				if(ar[i]==2)
				flg2=1;
				if(ar[i]==3)
				flg3=1;
				if(ar[i]==4)
				flg4=1;
				if(ar[i]==5)
				flg5=1;
				if(ar[i]==6)
				flg6=1;
			}
			if(flg1==0 || flg2==0 || flg3==0 || flg4==0 || flg5==0 || flg6==0)
			{
				flg=1;
			}
		}
		if(flg==1)
		{
			cout<<"no"<<endl;
			continue;
		}
		if(n%2==0)
		{
			int tmp=0,tmp1[n/2],tmp2[n/2];
			for(j=n-1;j>n/2;j--)
			{
				ar[j]=sub2[tmp++];
				if(ar[j]==7)
				flg7=1;
			}
			if(flg7!=1)
			{
				cout<<"no"<<endl;
				continue;
			}
			tmp1=sub1;
			tmp2=sub2;
			sort(tmp1,tmp1+n/2);
			sort(tmp2,tmp2+n/2);
			if(tmp1!=sub1 || tmp2!=sub2)
			{
				cout<<"no"<<endl;
				continue;
			}
			else
			{
				
			}
		}
		
	}
}
