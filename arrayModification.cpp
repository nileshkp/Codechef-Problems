#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;
		long long int ar[n],ar1[n],ar2[n],ar3[n];
		for(long long int i=0;i<n;i++)
			cin>>ar[i];
		if(k>n)
		{
			for(long long int i=0;i<n;i++)
			{
				long long int a=i%n;
				long long int b=n-(i%n)-1;
				ar[a]=ar[a]^ar[b];
				ar1[a]=ar[a];
			}
			for(long long int i=0;i<n;i++)
			{
				long long int a=i%n;
				long long int b=n-(i%n)-1;
				ar[a]=ar[a]^ar[b];
				ar2[a]=ar[a];
			}
			for(long long int i=0;i<n;i++)
			{
				long long int a=i%n;
				long long int b=n-(i%n)-1;
				ar[a]=ar[a]^ar[b];
				ar3[a]=ar[a];
			}	
	    	long long int res=k/n,tmp;
			tmp=res%3;
			if(tmp==0)
			{
				long long int tmp2=k%n;
				for(long long int i=0;i<tmp2;i++)
				cout<<ar1[i]<<" ";
				for(long long int i=tmp2;i<n;i++)
				cout<<ar3[i]<<" ";	
			}
			if(tmp==1)
			{
				long long int tmp2=k%n;
				for(long long int i=0;i<tmp2;i++)
				cout<<ar2[i]<<" ";
				for(long long int i=tmp2;i<n;i++)
				cout<<ar1[i]<<" ";		
			}
			if(tmp==2)
			{
				long long int tmp2=k%n;
				for(long long int i=0;i<tmp2;i++)
				cout<<ar3[i]<<" ";
				for(long long int i=tmp2;i<n;i++)
				cout<<ar2[i]<<" ";	
			}	
		}
		else
		{
			for(long long int i=0;i<k;i++)
			{
				long long int a=i%n;
				long long int b=n-(i%n)-1;
				ar[a]=ar[a]^ar[b];
				
			}
			for(long long int i=0;i<k;i++)
				cout<<ar[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
