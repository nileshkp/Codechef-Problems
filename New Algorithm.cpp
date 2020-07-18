#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	int op;
	cin>>op;
	long long int tmp;
	while(n!=0 && op!=0)
	{
		tmp=n%10;
		if(tmp==0)
		{
			op--;
			n=n/10;
		}
		else if(tmp-op >=0)
		{
			n=n-(n%10);
			n+=(tmp-op);
			op=0;
		}
		else
		{
			n=n/10;
			op=op-tmp-1;
		}
	}
	cout<<n<<endl;
	return 0;
}