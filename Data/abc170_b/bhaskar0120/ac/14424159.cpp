#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(NULL);
int x,y;
cin >> x >> y;
for(int i = 0; i <= x; ++i){
if(i*2+(x-i)*4 == y){
cout<<"Yes\n";
return 0;
}
}
cout<<"No\n";
}
