#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
using namespace std;
using ll = long long;
int main(){
int x,y; cin >> x >> y;
if(x == 1){
cout << "Yes" << endl;
return 0;
}
rep(i,x+1){
rep(j,x-i+1){
if(i*2+j*4 == y){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
}
