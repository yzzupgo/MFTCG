#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
#define OJ \
freopen("input.txt", "r", stdin); \
freopen("output.txt", "w", stdout);
#define endl "\n"
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int x,y;
cin>>x>>y;
if (y%2==0 && x<=y/2 && 2*x>=y/2){
cout<<"Yes";
}
else{
cout<<"No";
}
return 0;
}
