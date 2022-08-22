#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int x;
int y;
cin>>x>>y;
for (int i = 0; i <= x; ++i){
int t = 4*i + (x-i)*2;
if (t == y){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
}
