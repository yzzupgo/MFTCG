#include <bits/stdc++.h>
#define REP(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int main() {
int x,y;
cin>>x>>y;
REP(i,51) REP(j,51){
if(i+j==x && 2*i +4*j==y){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
return 0;
}
