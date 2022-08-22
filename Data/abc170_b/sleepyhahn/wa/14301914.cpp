#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
bool tf;
for(int i=0; i<=x; i++){
if(i*2 + (x-i)*4 == y) tf = true;
}
if(tf) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
