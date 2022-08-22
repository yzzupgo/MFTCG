#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
string saloh(ll n)
{
string s;
while(n){
s+=n%10+48;
n/=10;
}return s;
}
int main()
{
ll n,cnt=0;
cin>>n;n++;
while(n--){
string s=saloh(n);
if(s.size()%2)
cnt++;
}cout<<cnt;
}
