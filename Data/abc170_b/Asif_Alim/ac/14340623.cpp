#include<bits/stdc++.h>
using namespace std;
int main()
{
double t,n,j;
cin>>t>>n;
if(int(n)%2!=0)cout<<"No"<<endl;
else if(t>=ceil(n/4) and t<=ceil(n/2) and int(n)%2==0)
cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
