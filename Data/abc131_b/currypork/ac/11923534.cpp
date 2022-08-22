#include <bits/stdc++.h>
#include<vector>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); ++i)
int main() {
int a,b,c=0,d;
cin>>a>>b;
d=b+a-1;
rep(i,a)c+=b+i;
if(b<0){
if(d>=0){
cout<<c;
}
else cout<<c-d;
}
else if(b==0)cout<<c;
else cout<<c-b;
}
