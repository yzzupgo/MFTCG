#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ios::sync_with_stdio(false);
int n,x;
cin>>n>>x;
if(x%2 != 0){
cout<<"No"<<endl;
}
else
{
if(x>=(2*n) && x<=(4*n))
cout<<"Yes";
else
{
cout<<"No";
}
}
}
