#include <bits/stdc++.h>
using namespace std;
void solve(){
int x,y;
cin>>x>>y;
int flag = 0;
for(int i=0; i<100; i++){
int a = x-i;
if(a>=0){
if(i*2 + a*4 ==y){
flag = 1;
cout<<"Yes"<<endl;
break;
}
}
}
if(flag ==0 ){
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
