#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[6][6];
    int ar2[16];
    int tmp=0;
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            cin>>ar[i][j];
        }
    }
    for(int i=0;i<=3;i++)
    {
        for(int j=0;j<=3;j++)
        {
            for(int k=0;k<j+3;k++)
            {
                ar2[tmp]+=ar[i][k];
            }
            tmp++;
        }
        
    }
    tmp=0;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        ar2[tmp++]+=ar[i][j];
    }
    tmp=0;
    for(int i=2;i<=5;i++)
    {
        for(int j=0;j<=3;j++)
        {
            for(int k=0;k<j+3;k++)
            {
                ar2[tmp]+=ar[i][k];
            }
            tmp++;
        }
       
    }
    for(int i=0;i<16;i++)
    cout<<ar2[i]<<" ";
    return 0;
}
