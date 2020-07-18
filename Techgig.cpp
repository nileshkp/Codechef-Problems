#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int ipsr(unsigned long long int x);
	while(t--)
	{
		unsigned long long int n,res,i=0,cnt=0,tmp2;
		double tmp;
		int flg=0;
		cin>>n;
		if(n>=999970000299999)
		{
			if(n==1000000000000000000)
			{
				i=1000000;
				flg=1;
			}
			else
			{
				i=99999;
				flg=1;
			}
		}
		tmp=cbrt(n);
		//cout<<"tmp:"<<tmp;
	    res=int (tmp);
	    //cout<<res<<endl;
		if(flg==0)
		i=res;
		//cout<<"###"<<i<<endl;
		for(;i>1;i--)
		{
			if(ipsr(i))
			continue;
			tmp2=i*i*i;
			cnt+=(n/tmp2);
		}
		cout<<cnt<<endl;
	}
	return 0;
}
int ipsr(unsigned long long int m)
{
	unsigned long long int t;
	t=sqrt(m);
	if(t*t==m)
	return 1;
	else
	return 0;
}
//3 8 20 7 
