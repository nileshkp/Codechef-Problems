#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cout<<"Enter number of elements:\n";
	
	cin>>t;
	cout<<"Enter elements:\n";
	float ar[t];
	float mean,sd,sumdif,sum;
	for(int i=0;i<t;i++)
	{
		cin>>ar[i];
		sum+=ar[i];
	}
	mean=(float)(sum/t);
	cout<<"Sum of Series:"<<sum<<endl;
	cout<<"Mean:"<<mean<<endl;
	cout<<"================================================"<<endl;
	
	cout<<"Element:\t||"<<"\t(X-X^)^2:"<<endl;
	cout<<"================================================"<<endl;
	for(int i=0;i<t;i++)
	{
		float tmp;
		tmp=(float)((ar[i]-mean)*(ar[i]-mean));
		sumdif+=tmp;
		cout<<ar[i]<<"\t\t||\t\t"<<tmp<<endl;
	}
	cout<<"================================================"<<endl;
	cout<<"Sum of (X-X^)^2:"<<sumdif<<endl;
	float res;
	res=(float)sumdif/t;
	cout<<"Result:"<<res<<"\nSTANDARD DEVIATION:"<<sqrt(res)<<endl;
	return 0;
}
