// C++ program to convert a decimal 
// number to binary number 

#include <bits/stdc++.h> 
using namespace std; 

// function to convert decimal to binary 
int decToBinary( long long int n) 
{ 
	int binaryNum[64];
	int i = 0; 
	while (n > 0) 
	{ 
		n = n / 2; 
		i++; 
	}  
	return i;		
} 

long long int maxNumber(int cnt)
{
	long long int res=0;
	for(int i=0;i<cnt;i++)
	{
		res+=pow(2,i);
	}
	return res;
}
// Driver program to test above function 
int main() 
{ 
	long int t;
	cin>>t;
	while(t--)
	{
		long long int x,y,l,r,number,tmp;
		cin>>x>>y>>l>>r;
		int cnt=decToBinary(x>y?x:y);
		cout<<cnt<<endl;
		number=maxNumber(cnt);
		cout<<number<<endl;
		if(number<=r && number>=l)
		{
			cout<<number<<endl;
		}
		else
		{
			number=maxNumber(cnt-1);
			cout<<number<<endl;
		}
	} 
	return 0; 
} 

