#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
    	long int M;
    	cin>>M;
    	string pat;
    	cin>>pat;
    	long int lps[M],max=0;
	    long int len = 0; 
	    long int i;
		lps[0] = 0; 
	    i = 1;
	    while (i < M)
	    {
	        if (pat[i] == pat[len])
	        {
	           len++;
	           lps[i] = len;
	           if(len>max)
	           max=len;
	           i++;
	        }
	        else 
	        {
	           if (len != 0)
	           {
	             len = lps[len-1];
	           }
	           else 
	           { 
	             lps[i] = 0;
	             i++;
	           }
	        }
	    }
	    cout<<max;
	}
    return 0;
}

