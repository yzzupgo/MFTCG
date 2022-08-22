#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i< (n); ++i)
using ll = long long;
using P = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
int main() {
int X,Y;
cin>>X>>Y;
for(int i=0;i<=X;i++){
if(2*(i)+4*(X-i)==Y){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
}
