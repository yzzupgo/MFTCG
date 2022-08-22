#include <bits/stdc++.h>
using namespace std;
void solve(){
int x,y;
cin>>x>>y;
if(x>(y/4) && x<=(y/2)){
cout<<"Yes"<<endl;
}
else{
cout<<"No"<<endl;
}
}
int main() {
int t=1;
while(t--){
solve();
}
return 0;
}
