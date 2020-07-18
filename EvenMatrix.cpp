#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ar[n][n];
		
		int val=1;
		int m=n;
		int itr=n;
		int k=0,l=0;
		while(k<n && l<m)
		{
			for (int i = l; i < n; ++i) 
            ar[k][i] = val++;
            
             k++; 
  
       
	        for (int i = k; i < m; ++i) 
	            ar[i][n-1] = val++; 
	        
			n--; 
			
			if (k < m) 
	        { 
	            for (int i = n-1; i >= l; --i) 
	                ar[m-1][i] = val++; 
	            m--; 
	        } 
	        
	        if (l < n) 
        	{ 
            	for (int i = m-1; i >= k; --i) 
                 	ar[i][l] = val++; 
            	l++; 
        	} 	
		}
		
		for(int a=0;a<itr;a++)
		{
			for(int b=0;b<itr;b++)
			{
				cout<<ar[a][b]<<" ";
			}
			cout<<endl;
		}
		//cout<<endl;
	}
}
