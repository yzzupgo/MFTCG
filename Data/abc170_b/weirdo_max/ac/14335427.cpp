#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y;
cin>>x>>y;
if(y-(2*x)<0){
cout<<"No";
}
else{
int ans = (y-(2*x));
if(ans%2==0 && ans/2<=x){
cout<<"Yes";
}
else{
cout<<"No";
}
}
return 0;
}
