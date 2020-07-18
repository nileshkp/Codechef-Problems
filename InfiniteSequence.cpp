#include<bits/stdc++.h>
using namespace std;
int main()
{
	int init=0,i=0,j;
	int ar[128]={0};
	for(i=1;i<128;i++)
	{
		int flg=0;
		for(int k=i-1;k>=0;k--)
		{
			if(ar[i]==ar[k])
			{
				flg=1;
				ar[i+1]=i-k;
				break;
			}
		}
		cout<<ar[i]<<",";
	}
	return 0;
}
