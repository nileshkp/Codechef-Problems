#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int ar[n],ind[n];
		for(long long int i=0;i<n;i++)
		{
			cin>>ar[i];
			ind[i]=i;
		}
		
		vector < pair <long long int , long long int > > vt;
		for(long long int i=0;i<n;i++)
		{
			vt.push_back(make_pair(ar[i],ind[i]));
		}
		sort(vt.begin(),vt.end());
		
		long long int sum=0,itern=vt.size()-1,itero=vt.size()-1,cnt=0,dif=0;
		for(long long int i=0;i<vt.size();i++)
		{
			if(vt[i].second < itern)
			{
				itern=vt[i].second;
				if(vt[i].first - sum >0)
				{
					dif=itero-itern;
					cnt+=(vt[i].second+1+dif)*(vt[i].first - sum);
					sum+=(vt[i].first - sum);
					itero=itern-1;
				}
				else
				{
					continue;
				}
			}
			else
			continue;
		}
		cout<<cnt<<endl;
    } 
    return 0;
	
}
