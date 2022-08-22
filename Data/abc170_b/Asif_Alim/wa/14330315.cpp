#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,i,j;
cin>>t>>n;
if(n%2!=0)cout<<"No"<<endl;
else if(t>=n/4 and t<=n/2 and n%2==0)
cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
