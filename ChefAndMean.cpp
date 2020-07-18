#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k,sum=0,flg=0,flg2=0,tmp,tmp2=0,tmp3,min=0,tmp4;
		cin>>n;
		long long int ar[n];
		for(long long int i=0;i<n;i++)
		{
			cin>>ar[i];
			sum+=ar[i];
		}
		tmp=sum/n;
		tmp2=sum%n;
		if(tmp2!=0)
		{
			cout<<"Impossible"<<endl;
			continue;
		}
		else
		{
			tmp3=tmp*(n-1);
			for(long long int i=0;i<n;i++)
			{
				if(sum-ar[i]==tmp3)
				{
					flg=1;
					if(min==0)
					{
						min=ar[i];
						tmp4=i;
					}
					if(min>ar[i])
					{
						tmp4=i;
						min=ar[i];
					}
				}
			}
		}
		if(flg==1)
		cout<<tmp4+1<<endl;
		else
		cout<<"Impossible"<<endl;
	}
	return 0;
}
