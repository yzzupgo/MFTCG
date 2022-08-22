#define boost_io ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define casti static_cast<int>
#define cast static_cast
#define ll long long int
#define vi vector<int>
#define vpi vector<pair<int,int >>
#include <bits/stdc++.h>
using namespace std;
ll modF=1e9+7;
void solve1(){
int x,y;
cin>>x>>y;
int h=4*x-y;
if(h>=0 && h%2==0){
cout<<"Yes\n";
}
else{
cout<<"No\n";
}
}
int main(){
boost_io;
solve1();
return 0;
}
