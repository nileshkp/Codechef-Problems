#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n;
		cin>>n;
		long int cnt5=0,cnt10=0,cnt15=0,flg=1;
		int ar[n];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
			if(i==0 && ar[i]!=5)
			{
				flg=0;
			}
			if(ar[i]==5)
			{
				cnt5++;
			}
			else if(ar[i]==10)
			{
				
				if(cnt5>=1)
				{
					cnt5--;	
					cnt10++;	
				}
			
				else
				flg=0;
			}
			else
			{
				if(cnt10>=1)
				{
					cnt10--;
				}
				else if(cnt5>=2)
				{
					cnt5--;
					cnt5--;
				}
				else
					flg=0;
			}	
		}
		if(flg==0)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
}
