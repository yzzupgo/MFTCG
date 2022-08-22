#include <bits/stdc++.h>
#include <sstream>
using namespace std;
int main() {
int n,l;
cin >> n >>l;
int ans=0;
int start = l;
int last = n+l-1;
if(start<0 && last>0){
ans=(n+2*l-1)*(n)/2;
}else if(start<0 && last<=0){
ans=(n+2*l-2)*(n-1)/2;
}else if(start>=0){
ans=(n+2*l)*(n-1)/2;
}
cout<<ans<<endl;
}
