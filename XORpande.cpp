#include<bits/stdc++.h>
using namespace std;
int main()
{
   	long int t;
   	cin>>t;
   	long long int indFind(long long int);
   	while(t--)
   	{
   		long int n,tmp;
   		cin>>n;
   		long long int par=n,res1,res=0,nc=n;
   		
   		while(nc>2)
   		{
   			res1=indFind(nc);
   			res+=res1*2;
   			nc=n-res;
   			
		}
		if(nc==1 || nc==0 || nc==2)
		{
			cout<<n<<endl;
		}
		else
		{
			cout<<res<<endl;
		}
		
	}
	return 0;
}
long long int indFind(long long int r)
{
	long long int ar[]={1,3,9,27,81,243,729,2187,6561,19683,59049,177147,531441};
	long long int tmp;
	for(int i=0;i<13;i++)
   		{
   			if(r>=ar[i+1])
   			continue;
   			else
   			{
   				tmp=ar[i];
   			    return tmp;
			}	
		}		
}
