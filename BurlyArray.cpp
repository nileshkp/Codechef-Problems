#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned long long int n,l,r,x,p,q,qt,y,s=0,tmp,ans=0,sum=0;
		long long int q1;
		cin>>n;
		cin>>q1;
		unsigned long long int ar[n];
		for(unsigned long long int i=1;i<=n;i++)
		ar[i]=i;
		while(q1!=0)
		{
			int qt;
			cin>>qt;
			if(qt==1)
			{
				cin>>y;
				ar[y+s]=0;
				//cout<<"#"<<y+s<<"#"<<endl;
				q1--;
			}
			if(qt==2)
			{
				cin>>p>>q;
				l=p+s;
				r=q+s;
				//cout<<"r="<<r<<" l="<<l<<endl;
				tmp=r;
				ans=ar[r];
				//cout<<"ansint:"<<ans;
				for(unsigned long long int i=r-1;i>=l;i--)
				{
					if(ans<ar[i])
					{
						ans=ar[i];
						break;
					}
				}
				//cout<<"out:"<<ans;
				cout<<ans<<endl;
				sum+=ans;
				s=sum%n;
				//cout<<"s="<<s<<endl;
				q1--;
			}
		}
	}
	return 0;
}
