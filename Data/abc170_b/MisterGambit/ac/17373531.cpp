#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast_io ios_base::sync_with_stdio(false) ; cin.tie(0); cout.tie(0);
int main() {
fast_io;
int x,y;
cin>>x>>y;
for(int i=0;i<=x;i++) {
int j=x-i;
if(i*2+j*4==y||i*4+j*2==y) {
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
return 0;
}
