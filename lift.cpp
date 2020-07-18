#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,q;
	    cin>>n>>q;
	    int in=0,tmp=0,res=0;
	    while(q--)
	    {
	        int s,d;
	        cin>>s>>d;
	        res+=abs(tmp-s);
	        res+=abs(d-s);
	        tmp=d;
	        cout<<res<<endl;
	    }
	    cout<<res<<endl;
	}
	return 0;
}
/*
2
6 5
6 2
2 5
3 2
1 0
6 2
*/
