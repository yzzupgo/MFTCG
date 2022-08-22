#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int >a(5);
    for(auto &x:a)
    cin>>x;
    int min=10,ind=0;
    for(int i=0;i<5;i++)
    {
        if(a[i]%10<min&&((a[i]%10)!=0))
        {min=a[i]%10;ind=i;}
    }
     int temp =a[ind];
    a[ind]=a[4];
    a[4]=temp;
    int sum=a[4];
    for(int i=0;i<4;i++)
    {
        sum+=(a[i]+10-(a[i]%10));

        
    }
    cout<<sum;
    return 0;

}