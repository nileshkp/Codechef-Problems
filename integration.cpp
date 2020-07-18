#include<bits/stdc++.h>
#include<omp.h>
using namespace std;

double f(double x)
{
	return sqrt(1-pow(x,2));
}

int main(int *argc,char *argv[])
{
	int steps =100000;
	double integrate;
	integrate= f(0) + f(1);

	#pragma omp parallel
	{	
		int i=0; 
		for(i=1;i<steps;i++)
		{
			integrate+=2*f((double)(i)/steps);
		}
		integrate = integrate/(2*steps);
		cout<<integrate*4<<endl;
	}
	return 0;
}	
