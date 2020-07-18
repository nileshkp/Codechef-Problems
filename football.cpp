#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,tmp,tmp2,max=0;
		cin>>n;
		int ar[n];
		for(int i=0;i<n;i++)
		{
			cin>>tmp;
			ar[i]=tmp*20;
		}
		for(int i=0;i<n;i++)
		{
			cin>>tmp;
			tmp2=ar[i]-tmp*10;
			if(tmp2<0)
			tmp2=0;
			if(tmp2>max)
			{
				max=tmp2;
			}
		}
		cout<<max<<endl;
	}
	return 0;	
}
