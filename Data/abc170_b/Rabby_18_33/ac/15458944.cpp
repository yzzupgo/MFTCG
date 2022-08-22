#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
ll n,m;
cin>>n>>m;
if(m%2!=0){
cout<<"No"<<endl;
return 0;
}
ll maxi=(m/2);
ll mini=(m/4);
if(m%4!=0)
mini++;
if((n>=mini)&&(n<=maxi))
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}
