#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int main() {
int x,y;
cin>>x>>y;
int b;
bool test=false;
rep(a,x+1){
b=x-a;
if((2*a+4*b)==y){
test=true;
}
}
if(test){
cout<<"Yes"<<endl;
}else{
cout<<"No"<<endl;
}
}
