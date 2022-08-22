#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=1; i<(n);++i)
const int INF =1001001001;
using ll=long long;
using P = pair<ll,ll>;
using Graph =vector<string>;
Graph field;
queue<P> q;
int main() {
int a,b;
cin>>a>>b;
rep(i,a+1){
if(i*2+(a-i)*4==b){
cout << "Yes"<<endl;
return 0;
}
}
cout <<"No"<<endl;
}
