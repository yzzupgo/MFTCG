#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
#define rrep(i,n) for(int i=1;i<=(n);++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
const double Pi = acos(-1);
const ll mod=1e9+7;
int main(){
int x,y;
cin >>x>>y;
rrep(i,x){
if(2*i+4*(x-i)==y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
