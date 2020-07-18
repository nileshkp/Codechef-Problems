#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t1;
	cin>>t1;
	while(t1--)
	{
		
		int t;
		cin>>t;
		int min1,max1=0,min2,max2=0,min3,max3=0;
		while(t--)
		{
			int c,l,d;
			cin>>c>>l>>d;
			if(l==1)
			{
				if(d>max1)
				{
					min1=c;
					max1=d;
				}
			    if(d==max1)
				{
					if(c<min1)
					min1=c;
				}
					
			}
			if(l==2)
			{
				if(d>max2)
				{
						max2=d;
						min2=c;
				}
				if(d==max2)
				{
					if(c<min2)
					min2=c;
				}
			}
			if(l==3)
			{
				if(d>max3)
				{
					max3=d;
					min3=c;
					//cout<<"###"<<max3<<endl;
				}
				if(d==max3)
				{
					if(c<min3)
					min3=c;
					//cout<<"###"<<min3<<endl;
				}	
			}				
		}
		cout<<max1<<" "<<min1<<"\n"<<max2<<" "<<min2<<"\n"<<max3<<" "<<min3<<endl;
	}
	return 0;
}
