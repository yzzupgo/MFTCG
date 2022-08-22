#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define sz(x) (int)(x).size()
#define all(x) x.begin(), x.end()
const int mod =1e9+7;
int main() {
IOS;
int x,y;
cin>>x>>y;
for(int i=0;i<x-1;i++){
if(2*i+2*x==y){
cout<<"Yes";
return 0;
}
}
cout<<"No";
}
