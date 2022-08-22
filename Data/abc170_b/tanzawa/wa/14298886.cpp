#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y; cin >>x>>y;
bool ans = false;
for(int i=0;i<100;i++){
if(i*2+(x-i)*4 == y) ans = true;
}
if(ans) cout <<"Yes" <<endl;
else cout << "No" <<endl;
}
