#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	long int tmp=str.size();
	unsigned long long int pr;
	for(long int i=0;i<n;i++)
	{
		if((str[i]=='g' && str[i+1]=='g') || (str[i]=='f' && str[i+1]=='f'))
		{
			cnt++;
			i++;
		}
		else if(str[i]=='c' || str[i]=='k')
		{
			cnt++;
		}
	}
	
	return 0;
}
