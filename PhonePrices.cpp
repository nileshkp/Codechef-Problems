#include<iostream>
using namespace std;
#define max 751;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,min,tmp=0,cnt=0,flg=0;
		cin>>n;
		int ar[n];
		min=max;
		for(int i=0;i<n;i++)
			cin>>ar[i];
		for(int i=0;i<n;i++)
		{
			int j=i-5;
			if(j<0)
			j=0;
			for(int k=i-1;k>=j;k--)
			{
				if(ar[i]<=ar[k])
				{
					flg=1;
				}
				else
				{
					flg=0;
					break;
				}
			}
			if(flg==1)
			cnt++;
		}	
		cout<<cnt<<endl;
	}
	return 0;
}
