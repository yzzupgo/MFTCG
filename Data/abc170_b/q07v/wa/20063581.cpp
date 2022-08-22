#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
using ll = long long;
int main(){
int x, y;
cin >> x >> y;
bool ans = false;
for(int i = 1; i < x; i++){
if(2*i+y == 4*x){
ans = true;
break;
}
else{
continue;
}
}
if (ans) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
