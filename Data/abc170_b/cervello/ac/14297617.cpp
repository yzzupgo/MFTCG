#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define eb emplace_back
#define mk make_pair
#define all(x) x.begin(),x.end()
#define mod 1000000007
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
int x,y; cin>>x>>y;
bool flag=0;
for(int i=1;i<=x;i++){
if(((x-i)*2+i*4==y)||(x-i)*4+i*2==y)
return cout<<"Yes\n", 0;
}
cout<<"No\n";
return 0;
}
