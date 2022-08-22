#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
int n,m;
cin>>n>>m;
if(m%2!=0){
cout<<"No"<<endl;
return 0;
}
int maxi=(m/2);
int mini=(m/4);
if(m%4!=0)
maxi++;
if(n>=mini&&n<=maxi)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}
