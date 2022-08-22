#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<utility>
#include<iomanip>
#include<map>
#include<cmath>
#include<cstdio>
#define rep(i,n) for(int i=0; i<(n); ++i)
#define pai 3.1415926535897932384
using namespace std;
using ll =long long;
using P = pair<int,int>;
int main(int argc, const char * argv[]) {
int X, Y;
cin >> X >> Y;
bool ans=false;
for(int bit=0; bit<(1<<X); bit++){
int sum=0;
for(int i=0; i<X; i++){
if(bit>>i&1){
sum+=4;
}else{
sum+=2;
}
}
if(sum==Y){
ans=true;
}
}
if(ans) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
