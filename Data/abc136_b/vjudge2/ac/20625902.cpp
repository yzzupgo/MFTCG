#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long
#define pb push_back
using namespace std;
string saloh(ll n)
{
string s;
while(n){
s+=n%10+48;
n/=10;
}reverse(s.begin(),s.end());
return s;
}
int main()
{
ll n,cnt=0;
cin>>n;
for(ll i=1;i<=n;i++){
string s;
s=saloh(i);
if(s.size()%2==1)cnt++;
}cout<<cnt;
}
