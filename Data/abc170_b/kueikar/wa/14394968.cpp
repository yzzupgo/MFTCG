#include <bits/stdc++.h>
using namespace std;
int main(){
int X,Y;
cin >> X >> Y;
bool ans = false;
for(int i=0;i<=X;i++){
for(int j=X-i;j<=X;j++){
if((Y-4*j-2*i)==0){
ans = true;
}
}
}
if(ans) cout << "YES" << endl;
else cout << "NO" << endl;
}
