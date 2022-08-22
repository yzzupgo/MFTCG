#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
ll a , b , c , d , cnt ,ans , x , y ;
float t ;
string s , g ;
set<char> st ;
vector<int> v , vv , vc ;
int main()
{
cin >> a ;
for(int i=1; i <= a ; i++)
{
a=i;
while(a)
{
s+=a%10+48;
a/=10;
}
reverse(s.begin() , s.end());
if(s.size()%2==1)
cnt++;
}
cout << cnt ;
}
