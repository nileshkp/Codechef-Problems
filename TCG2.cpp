/* Read input from STDIN. Print your output to STDOUT*/
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *a[])
{
	
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int p[n],q[n],cnt=0;
        for(int i=0;i<n;i++)
            cin>>p[i];
        for(int i=0;i<n;i++)
            cin>>q[i];  
       
        long long int j=0, i=0;
        sort(p,p+n);   
        sort(q,q+n);  
        
        for(int i=0,j=0;(i<n && j<n);i++,j++)
        {
        	if(p[i]>q[j])
        	{
        		cnt++;
        		//cout<<i<<" "<<j<<" "<<cnt<<"\n";
			}
        	else
        	{
				while(i++ )
				{
					if(i>n)
					break;
					if(p[i]<q[j])
					continue;
					else
					break;
				}
				i--;j--;
			}
			cout<<cnt<<endl;						
		}
        
        
        return 0;
    }
}

