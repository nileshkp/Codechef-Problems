#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,m,x,y,s,cnt=0;
		cin>>n>>m>>x>>y>>s;
		long int hor[x],ver[y];
	
		for(long int i=0;i<x;i++)
		{
			cin>>ver[i];
		}
		
		
		for(long int i=0;i<y;i++)
		{
			cin>>hor[i];
		}
		sort(hor,hor+y);
		sort(ver,ver+x);
		long int difh[y+1],difv[x+1];
		
		difh[0]=hor[0]-1;
		difv[0]=ver[0]-1;
		
		difh[y]=m-hor[y-1];
		difv[x]=n-ver[x-1];
		
		
		for(long int i=1;i<x;i++)
		{
			difv[i]=ver[i]-ver[i-1]-1;
		}
		for(long int i=1;i<y;i++)
		{
			difh[i]=hor[i]-hor[i-1]-1;
		}
		
		
		for(long int i=0;i<x+1;i++)
		{
			for(long int j=0;j<y+1;j++)
			{
				long int res1,res2;
				res1=difv[i]/s;
				res2=difh[j]/s;
				cout<<"RES1:"<<res1<<" RES2:"<<res2<<endl;
				if(res1>0 && res2>0)
				{
					cnt+=res1*res2;
				}
			}
		}	
		cout<<"####"<<cnt<<endl;
	}
	return 0;
}
